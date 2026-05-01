/*
 * XREFs of ?GetOcclusionKind@TabTipAdapterPolicy@KeyboardHosting@@QEAA?AW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@I@Z @ 0x18032B0D4
 * Callers:
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180320B54 (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetOcclusionKind(RTL_SRWLOCK *a1, int a2)
{
  unsigned int v4; // ebx
  RTL_SRWLOCK *v5; // r14
  char v6; // si
  bool v7; // r15
  __int64 v8; // rax
  unsigned __int8 *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD *Ptr; // r8
  __int64 v13; // r9
  char *v14; // rcx
  char *i; // rdx
  char *v16; // rax
  __m128i v18; // [rsp+30h] [rbp-38h]
  int v19; // [rsp+78h] [rbp+10h] BYREF

  v19 = a2;
  v4 = 2;
  if ( (a2 & 0xFFFFFFFA) == 0 && a2 != 1 )
  {
    v4 = 0;
    v5 = a1 + 53;
    v6 = 0;
    v7 = 0;
    AcquireSRWLockExclusive(a1 + 53);
    v8 = 0xCBF29CE484222325uLL;
    v9 = (unsigned __int8 *)&v19;
    v10 = 4LL;
    do
    {
      v11 = *v9++;
      v8 = 0x100000001B3LL * (v11 ^ v8);
      --v10;
    }
    while ( v10 );
    Ptr = a1[48].Ptr;
    v13 = 2 * (v8 & (__int64)a1[51].Ptr);
    v14 = (char *)a1[46].Ptr;
    for ( i = (char *)Ptr[2 * (v8 & (__int64)a1[51].Ptr)]; ; i = *(char **)i )
    {
      v16 = (char *)Ptr[v13] == v14 ? (char *)a1[46].Ptr : *(char **)Ptr[v13 + 1];
      if ( i == v16 )
        break;
      if ( *((_DWORD *)i + 4) == a2 )
        goto LABEL_13;
    }
    i = (char *)a1[46].Ptr;
LABEL_13:
    if ( i != v14 )
    {
      v18 = *(__m128i *)(i + 40);
      v7 = *((_DWORD *)i + 6) == 1;
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v18, 8)) || (v6 = 0, v18.m128i_i8[9]) )
        v6 = 1;
    }
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    if ( !v7 || v6 )
      return 1;
  }
  return v4;
}
