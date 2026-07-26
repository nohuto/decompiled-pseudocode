/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___ @ 0x1C01244D0
 * Callers:
 *     ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x1C0124710 (-ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$KArray@V-$unique_ptr@UKSt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x1C010B93C (--_V@YAXPEAX@Z.c)
 *     _lambda_90693e01559ab5daa9d90de50bdb401e_::operator() @ 0x1C012469C (_lambda_90693e01559ab5daa9d90de50bdb401e_--operator().c)
 *     ?resize@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C01248A4 (-resize@-$KArray@V-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00.c)
 */

__int64 KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        __int64 a3,
        ...)
{
  _BYTE *v6; // rbp
  _BYTE *v7; // rbx
  NTSTATUS ValueKey; // eax
  NTSTATUS v9; // esi
  _BYTE *PoolWithTag; // rax
  __int64 v11; // rax
  _WORD *v12; // rsi
  _WORD *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v17; // ebp
  _WORD *v18; // rdi
  ULONG ResultLength[4]; // [rsp+30h] [rbp-158h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-148h] BYREF
  va_list va; // [rsp+1A8h] [rbp+20h] BYREF

  va_start(va, a3);
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v6 = KeyValueInformation;
  v7 = 0LL;
  ValueKey = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, ResultLength);
  v9 = ValueKey;
  if ( ValueKey == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x7A536C4Du);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_3:
      v9 = -1073741670;
      goto LABEL_17;
    }
    v9 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength[0], ResultLength);
    if ( v9 < 0 )
      goto LABEL_17;
    v6 = v7;
  }
  else if ( ValueKey < 0 )
  {
    goto LABEL_17;
  }
  if ( *((_DWORD *)v6 + 1) != -57326 )
  {
    v9 = -1073741788;
    goto LABEL_17;
  }
  v11 = *((unsigned int *)v6 + 2);
  if ( (v11 & 1) != 0 )
  {
    v9 = -1073741811;
    goto LABEL_17;
  }
  v12 = v6 + 12;
  v13 = v6 + 12;
  v14 = (unsigned __int64)&v6[v11 + 12];
  v15 = 0;
  if ( (unsigned __int64)(v6 + 12) >= v14 )
    goto LABEL_16;
LABEL_12:
  if ( *v13 )
  {
    while ( (unsigned __int64)++v13 < v14 )
    {
      if ( !*v13 )
      {
        ++v15;
        if ( (unsigned __int64)++v13 < v14 )
          goto LABEL_12;
        break;
      }
    }
LABEL_16:
    v9 = -1073741789;
    goto LABEL_17;
  }
  if ( !(unsigned __int8)Rtl::KArray<wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,1>::resize(
                           a3,
                           v15) )
    goto LABEL_3;
  v17 = 0;
  while ( *v12 )
  {
    v18 = v12;
    do
      ++v18;
    while ( *v18 );
    v9 = lambda_90693e01559ab5daa9d90de50bdb401e_::operator()((__int64 *)va, v12, v17);
    if ( v9 < 0 )
      goto LABEL_17;
    v12 = v18 + 1;
    ++v17;
  }
  v9 = 0;
LABEL_17:
  if ( v7 )
    operator delete[](v7);
  return (unsigned int)v9;
}
