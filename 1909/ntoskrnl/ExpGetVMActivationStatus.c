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
  _DWORD v12[2]; // [rsp+30h] [rbp-20h] BYREF
  int v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  _DWORD v15[2]; // [rsp+48h] [rbp-8h] BYREF

  v5 = a5;
  v12[0] = 0;
  v14 = 0LL;
  *a5 = 0;
  v12[1] = 4;
  if ( (int)ZwQueryLicenseValue((__int64)L">@", 0LL, (__int64)v12) < 0 || !v12[0] )
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
          result = ((__int64 (__fastcall *)(int *))qword_1409AD4B0)(&v13);
          if ( (int)result >= 0 )
          {
            result = sub_14072D380(a1, a2, a3, a4, v13);
            *v5 = 1;
          }
          if ( (_DWORD)result == -1073741198 )
          {
LABEL_16:
            if ( qword_1409AD4A0 )
            {
              v15[0] = 0x20000;
              v15[1] = 1;
              result = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64 *, __int64))qword_1409AD4A0)(
                         v15,
                         8LL,
                         &v14,
                         8LL);
              if ( (int)result >= 0 && (_DWORD)v14 == 0x20000 )
              {
                result = sub_14072D380(a1, a2, a3, a4, HIDWORD(v14));
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
