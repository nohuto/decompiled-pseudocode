/*
 * XREFs of ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0077508
 * Callers:
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0077254 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0077440 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     ?CitpBytesToString@@YAXPEBXIPEAG@Z @ 0x1C0077728 (-CitpBytesToString@@YAXPEBXIPEAG@Z.c)
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C007779C (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     ?CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z @ 0x1C0077860 (-CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z.c)
 *     ?CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z @ 0x1C0077C30 (-CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01847F4 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpUpdateActiveBootId(int a1, char a2, unsigned __int16 *a3, unsigned __int16 *a4)
{
  unsigned int v4; // r14d
  unsigned int v8; // esi
  int v9; // ebx
  char IsStateSeparationEnabled; // al
  const unsigned __int16 *v11; // rdx
  unsigned int v12; // edx
  bool v13; // zf
  void *v14; // rdi
  NTSTATUS v15; // eax
  const char *v16; // rdx
  unsigned __int16 v17; // ax
  NTSTATUS v19; // eax
  const char *v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // r8d
  int v23; // esi
  ULONG v24; // r15d
  USHORT v25; // ax
  NTSTATUS v26; // eax
  const char *v27; // rdx
  unsigned int Data; // [rsp+30h] [rbp-A1h] BYREF
  struct _UNICODE_STRING Handle; // [rsp+38h] [rbp-99h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-89h] BYREF
  int v31; // [rsp+50h] [rbp-81h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-79h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-71h] BYREF
  _DWORD KeyInformation[12]; // [rsp+70h] [rbp-61h] BYREF
  WCHAR SourceString[12]; // [rsp+A0h] [rbp-31h] BYREF
  _BYTE KeyValueInformation[16]; // [rsp+B8h] [rbp-19h] BYREF
  USHORT v37; // [rsp+C8h] [rbp-9h]
  char v38; // [rsp+CCh] [rbp-5h] BYREF

  v4 = 0;
  v31 = a1;
  *(_QWORD *)&Handle.Length = 0LL;
  Data = 0;
  v30 = 0;
  v8 = 0;
  if ( a2 )
  {
    Data = MEMORY[0xFFFFF780000002C4];
    if ( !MEMORY[0xFFFFF780000002C4] )
      return (unsigned int)-1073741637;
  }
  v9 = CitpEnsureDataKey((void **)&Handle);
  if ( v9 < 0 )
    goto LABEL_50;
  ZwClose(*(HANDLE *)&Handle.Length);
  *(_QWORD *)&Handle.Length = 0LL;
  IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
  v11 = L"\\Registry\\Machine\\OSDATA\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT\\System\\Active";
  if ( !IsStateSeparationEnabled )
    v11 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT\\System\\Active";
  v9 = CitpEnsureKey((void **)&Handle, v11, 1);
  if ( v9 < 0 )
  {
LABEL_50:
    v14 = *(void **)&Handle.Length;
  }
  else
  {
    CitpBytesToString(&v31, v12, SourceString);
    RtlInitUnicodeString(&DestinationString, SourceString);
    v13 = a2 == 0;
    v14 = *(void **)&Handle.Length;
    if ( v13 )
    {
      v15 = ZwDeleteValueKey(*(HANDLE *)&Handle.Length, &DestinationString);
      if ( v15 == -1073741772 )
        v15 = 0;
      if ( v15 < 0 )
        CitpLogFailureWorker(v15, v16, 0x5C9u);
      goto LABEL_12;
    }
    CitpParameterGetInt32(*(HANDLE *)&Handle.Length, SourceString, &v30);
    memset(KeyInformation, 0, sizeof(KeyInformation));
    v19 = ZwQueryKey(v14, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    v9 = v19;
    if ( v19 >= 0 || v19 == -2147483643 || v19 == -1073741789 )
    {
      v21 = KeyInformation[8];
      if ( KeyInformation[8] > 8u )
      {
        v23 = KeyInformation[8] - 8;
        v24 = 0;
        while ( v4 < v21 )
        {
          v19 = ZwEnumerateValueKey(v14, v24, KeyValueFullInformation, KeyValueInformation, 0x2Au, &ResultLength);
          v9 = v19;
          if ( v19 < 0 && v19 != -2147483643 && v19 != -1073741789 )
          {
            if ( v19 == -2147483622 )
              break;
            v22 = 1434;
            goto LABEL_33;
          }
          Handle.Buffer = (PWSTR)&v38;
          v25 = v37;
          if ( v37 <= 0x12u )
          {
            Handle.Length = v37;
          }
          else
          {
            v25 = 18;
            Handle.Length = 18;
          }
          Handle.MaximumLength = v25;
          v26 = ZwDeleteValueKey(v14, &Handle);
          if ( v26 < 0 )
          {
            ++v24;
            CitpLogFailureWorker(v26, v27, 0x5AEu);
          }
          else
          {
            --v23;
          }
          ++v4;
          if ( !v23 )
            break;
          v21 = KeyInformation[8];
        }
      }
      v19 = ZwSetValueKey(v14, &DestinationString, 0, 4u, &Data, 4u);
      v9 = v19;
      if ( v19 >= 0 )
      {
        v8 = v30;
LABEL_12:
        if ( a3 )
        {
          if ( v8 > 0xFFFF )
            LOWORD(v8) = -1;
          *a3 = v8;
        }
        if ( a4 )
        {
          v17 = Data;
          if ( Data > 0xFFFF )
            v17 = -1;
          *a4 = v17;
        }
        v9 = 0;
        goto LABEL_21;
      }
      v22 = 1465;
    }
    else
    {
      v22 = 1413;
    }
LABEL_33:
    CitpLogFailureWorker(v19, v20, v22);
  }
LABEL_21:
  if ( v14 )
    ZwClose(v14);
  return (unsigned int)v9;
}
