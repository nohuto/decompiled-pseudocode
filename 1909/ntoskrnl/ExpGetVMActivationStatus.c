/*
 * XREFs of ExpGetVMActivationStatus @ 0x14072CC60
 * Callers:
 *     ExpGenuinePolicyPostProcess @ 0x1406D1F10 (ExpGenuinePolicyPostProcess.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x1401C35F0 (ZwQueryLicenseValue.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     sub_14072D380 @ 0x14072D380 (sub_14072D380.c)
 *     ExActivateVMWithSubscription @ 0x14090B6AC (ExActivateVMWithSubscription.c)
 *     ExGetVMType @ 0x14090BB1C (ExGetVMType.c)
 */

__int64 __fastcall ExpGetVMActivationStatus(int a1, int a2, int a3, int a4, _BYTE *a5)
{
  _BYTE *v5; // rdi
  __int64 result; // rax
  unsigned int v11; // r11d
  int Data; // [rsp+30h] [rbp-20h] BYREF
  ULONG v13; // [rsp+34h] [rbp-1Ch] BYREF
  int v14; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h] BYREF
  _DWORD v16[2]; // [rsp+48h] [rbp-8h] BYREF

  v5 = a5;
  Data = 0;
  v15 = 0LL;
  *a5 = 0;
  v13 = 4;
  if ( ZwQueryLicenseValue((PUNICODE_STRING)&stru_140947780, 0LL, &Data, 4u, &v13) < 0 || !Data )
    return 0LL;
  result = ExGetVMType(&a5);
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)a5 )
    {
      result = ExActivateVMWithSubscription(a1, a2, a3, a4, (__int64)v5);
      if ( (int)result < 0 || !*v5 )
      {
        result = 3221226098LL;
        if ( (_DWORD)a5 == 1 )
        {
          if ( !qword_1409AD4B0 )
            goto LABEL_16;
          result = ((__int64 (__fastcall *)(int *))qword_1409AD4B0)(&v14);
          if ( (int)result >= 0 )
          {
            result = sub_14072D380(a1, a2, a3, a4, v14);
            *v5 = 1;
          }
          if ( (_DWORD)result == -1073741198 )
          {
LABEL_16:
            if ( qword_1409AD4A0 )
            {
              v16[0] = 0x20000;
              v16[1] = 1;
              result = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64 *, __int64))qword_1409AD4A0)(
                         v16,
                         8LL,
                         &v15,
                         8LL);
              if ( (int)result >= 0 && (_DWORD)v15 == 0x20000 )
              {
                result = sub_14072D380(a1, a2, a3, a4, HIDWORD(v15));
                *v5 = 1;
                if ( qword_1409AD4A8 )
                  return ((__int64 (__fastcall *)(_QWORD))qword_1409AD4A8)(v11);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
