/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___ @ 0x1C0104168
 * Callers:
 *     ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x1C010439C (-ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$KArray@V-$unique_ptr@UKSt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00D0550 (--_V@YAXPEAX@Z.c)
 *     _lambda_90693e01559ab5daa9d90de50bdb401e_::operator() @ 0x1C010431C (_lambda_90693e01559ab5daa9d90de50bdb401e_--operator().c)
 *     ?resize@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0104530 (-resize@-$KArray@V-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00.c)
 */

__int64 KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        __int64 a3,
        ...)
{
  _DWORD *PoolWithTag; // rbp
  void *v7; // rbx
  NTSTATUS ValueKey; // eax
  int v9; // esi
  __int64 v10; // rax
  _WORD *v11; // rsi
  _WORD *v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned int v16; // ebp
  _WORD *v17; // rdi
  ULONG ResultLength[4]; // [rsp+30h] [rbp-158h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-148h] BYREF
  va_list va; // [rsp+1A8h] [rbp+20h] BYREF

  va_start(va, a3);
  PoolWithTag = KeyValueInformation;
  v7 = 0LL;
  ValueKey = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, ResultLength);
  v9 = ValueKey;
  if ( ValueKey == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x7A536C4Du);
    if ( !PoolWithTag )
      goto LABEL_7;
    operator delete[](0LL);
    v7 = PoolWithTag;
    ValueKey = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength[0], ResultLength);
    v9 = ValueKey;
  }
  if ( ValueKey < 0 )
    goto LABEL_16;
  if ( PoolWithTag[1] != -57326 )
  {
    v9 = -1073741788;
    goto LABEL_16;
  }
  v10 = (unsigned int)PoolWithTag[2];
  if ( (v10 & 1) != 0 )
  {
    v9 = -1073741811;
    goto LABEL_16;
  }
  v11 = PoolWithTag + 3;
  v12 = PoolWithTag + 3;
  v13 = (unsigned __int64)PoolWithTag + v10 + 12;
  v14 = 0;
  if ( (unsigned __int64)(PoolWithTag + 3) >= v13 )
  {
LABEL_15:
    v9 = -1073741789;
    goto LABEL_16;
  }
LABEL_11:
  if ( *v12 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)++v12 >= v13 )
        goto LABEL_15;
      if ( !*v12 )
      {
        ++v14;
        if ( (unsigned __int64)++v12 < v13 )
          goto LABEL_11;
        goto LABEL_15;
      }
    }
  }
  if ( !(unsigned __int8)Rtl::KArray<wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,1>::resize(
                           a3,
                           v14) )
  {
LABEL_7:
    v9 = -1073741670;
    goto LABEL_16;
  }
  v16 = 0;
  while ( *v11 )
  {
    v17 = v11;
    do
      ++v17;
    while ( *v17 );
    v9 = lambda_90693e01559ab5daa9d90de50bdb401e_::operator()((__int64 *)va, v11, v16);
    if ( v9 < 0 )
      goto LABEL_16;
    v11 = v17 + 1;
    ++v16;
  }
  v9 = 0;
LABEL_16:
  operator delete[](v7);
  return (unsigned int)v9;
}
