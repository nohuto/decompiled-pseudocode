/*
 * XREFs of ?IgnoreInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x18032BE7C
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18032CFB0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x18032C0C0 (-IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 */

bool __fastcall KeyboardHosting::TabTipAdapterPolicy::IgnoreInputAppRequestedShow(
        RTL_SRWLOCK *this,
        int a2,
        const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *a3)
{
  RTL_SRWLOCK *v3; // rdi
  __int64 v7; // rax
  unsigned __int8 *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  _QWORD *Ptr; // r8
  __int64 v12; // r9
  char *v13; // rcx
  char *i; // rdx
  char *v15; // rax
  bool v16; // bl
  __m128i v18; // [rsp+20h] [rbp-38h]
  int v19; // [rsp+68h] [rbp+10h] BYREF

  v19 = a2;
  v3 = this + 53;
  AcquireSRWLockShared(this + 53);
  v7 = 0xCBF29CE484222325uLL;
  v8 = (unsigned __int8 *)&v19;
  v9 = 4LL;
  do
  {
    v10 = *v8++;
    v7 = 0x100000001B3LL * (v10 ^ v7);
    --v9;
  }
  while ( v9 );
  Ptr = this[48].Ptr;
  v12 = 2 * (v7 & (__int64)this[51].Ptr);
  v13 = (char *)this[46].Ptr;
  for ( i = (char *)Ptr[2 * (v7 & (__int64)this[51].Ptr)]; ; i = *(char **)i )
  {
    v15 = (char *)Ptr[v12] == v13 ? (char *)this[46].Ptr : *(char **)Ptr[v12 + 1];
    if ( i == v15 )
      break;
    if ( *((_DWORD *)i + 4) == a2 )
      goto LABEL_11;
  }
  i = (char *)this[46].Ptr;
LABEL_11:
  v16 = i != v13
     && (v18 = *(__m128i *)(i + 20), (unsigned __int8)_mm_cvtsi128_si32(v18))
     && *(_DWORD *)a3 == 2
     && *(_QWORD *)((char *)a3 + 4) == v18.m128i_i64[1]
     && !KeyboardHosting::TabTipAdapterPolicy::IsCursorPositionValid((KeyboardHosting::TabTipAdapterPolicy *)this);
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v16;
}
