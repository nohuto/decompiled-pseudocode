/*
 * XREFs of RIMIDEGetTimeStampDelta @ 0x1C011E7E8
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C011ED14 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMIDEGetQpcBasedTouchStackTime @ 0x1C011E760 (RIMIDEGetQpcBasedTouchStackTime.c)
 *     RIMIDEValidateInjectionQpcCount @ 0x1C011FAF0 (RIMIDEValidateInjectionQpcCount.c)
 *     RIMIDEValidateInjectionTime @ 0x1C011FB9C (RIMIDEValidateInjectionTime.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEGetTimeStampDelta(char *a1, __int64 a2, unsigned int *a3)
{
  int v3; // r12d
  unsigned __int64 v4; // r14
  int v5; // r15d
  int v6; // ebp
  unsigned int v7; // ebx
  PVOID v9; // r13
  char *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // r10d
  __int64 v15; // rax
  int v16; // r8d
  int v17; // eax
  BOOL v18; // r9d
  __int64 v19; // r11
  unsigned int v20; // esi
  int v21; // eax
  unsigned int v22; // ecx
  bool v23; // zf
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // [rsp+30h] [rbp-48h]
  __int64 v31; // [rsp+38h] [rbp-40h]
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF
  unsigned int *v33; // [rsp+90h] [rbp+18h]
  int v34; // [rsp+98h] [rbp+20h]

  v33 = a3;
  v3 = *(_DWORD *)(a2 + 64);
  v4 = *(_QWORD *)(a2 + 80);
  v5 = 1;
  v6 = 1;
  v7 = 0;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object) < 0 )
    return 0LL;
  v9 = Object;
  v10 = (char *)Object + 88;
  if ( !Object )
    v10 = 0LL;
  if ( (*((_DWORD *)v10 + 50) & 0x80u) != 0 )
  {
    v11 = *((_QWORD *)Object + 59);
    v12 = *((_QWORD *)v10 + 60);
    v30 = v12;
    v13 = *(_QWORD *)(v11 + 48);
    v14 = *(_DWORD *)(v11 + 28);
    v31 = v13;
    v34 = v14;
    if ( !*(_DWORD *)(v12 + 944) )
    {
      *(_QWORD *)(v11 + 20) = 0LL;
      *(_DWORD *)(v11 + 28) = 0;
      *(_DWORD *)(v11 + 36) = 0;
      *(_QWORD *)(v11 + 40) = 0LL;
      *(_QWORD *)(v11 + 48) = 0LL;
      *(_DWORD *)(v11 + 56) = 0;
    }
    if ( (!v3 || !v4) && (!*(_DWORD *)(v11 + 20) || !v4) )
    {
      v15 = *(_QWORD *)(v11 + 40);
      if ( !v15 || !v3 )
      {
        if ( v4 || v15 )
        {
          v23 = *(_DWORD *)(v12 + 944) == 0;
          v24 = *(_QWORD *)(v12 + 744);
          v25 = *(_DWORD *)(v11 + 56);
          LODWORD(Object) = 0;
          if ( (unsigned int)RIMIDEValidateInjectionQpcCount(v4, v13, v24, v23, v25) )
          {
            v28 = *(_QWORD *)(v11 + 40);
            if ( v4 <= v28 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v26, v27);
              v28 = *(_QWORD *)(v11 + 40);
            }
            v29 = 10000 * (v4 - v28) / gliQpcFreq.QuadPart;
            v20 = v29;
            if ( *(_DWORD *)(v30 + 944) )
            {
              if ( (_DWORD)v29 == *(_DWORD *)(v11 + 32) )
                v6 = 0;
              goto LABEL_33;
            }
            *(_QWORD *)(v11 + 40) = v4;
            goto LABEL_30;
          }
        }
        else
        {
          v16 = *(_DWORD *)(v12 + 736);
          v17 = *(_DWORD *)(v11 + 36);
          v18 = *(_DWORD *)(v12 + 944) == 0;
          LODWORD(Object) = 1;
          if ( (unsigned int)RIMIDEValidateInjectionTime(v3, v14, v16, v18, v17) )
          {
            v20 = 10 * (v3 - *(_DWORD *)(v11 + 20));
            v21 = RIMIDEGetQpcBasedTouchStackTime(v19);
            if ( *(_DWORD *)(v30 + 944) )
            {
              if ( !v20 )
              {
                v22 = *(_DWORD *)(v11 + 32);
                v20 = v21 - *(_DWORD *)(v11 + 24);
                if ( v20 <= v22 )
                {
                  if ( v22 - v20 >= 5 )
                    v6 = 0;
                  else
                    v20 = v22 + 1;
                }
              }
              goto LABEL_33;
            }
            *(_DWORD *)(v11 + 20) = v3;
            *(_DWORD *)(v11 + 24) = v21;
LABEL_30:
            v20 = 0;
LABEL_33:
            *(_DWORD *)(v11 + 32) = v20;
            if ( (_DWORD)Object )
            {
              if ( !v34 || v3 )
                v5 = 0;
              *(_DWORD *)(v11 + 36) = v5;
              *(_DWORD *)(v11 + 28) = v3;
            }
            else
            {
              if ( !v31 || v4 )
                v5 = 0;
              *(_DWORD *)(v11 + 56) = v5;
              *(_QWORD *)(v11 + 48) = v4;
            }
            *v33 = v20;
            goto LABEL_43;
          }
        }
      }
    }
    v6 = 0;
LABEL_43:
    v7 = v6;
  }
  ObfDereferenceObject(v9);
  return v7;
}
