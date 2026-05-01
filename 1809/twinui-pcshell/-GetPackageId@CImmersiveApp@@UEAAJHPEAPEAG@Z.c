/*
 * XREFs of ?GetPackageId@CImmersiveApp@@UEAAJHPEAPEAG@Z @ 0x1800554A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18003B810 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 */

__int64 __fastcall CImmersiveApp::GetPackageId(CImmersiveApp *this, int a2, unsigned __int16 **a3)
{
  RTL_SRWLOCK *v4; // rcx
  int v7; // ebp
  __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  int v12; // eax
  void *v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  _WORD *v16; // rax
  __int64 v17; // rdi
  __int16 v18; // cx
  LPVOID pv[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  *a3 = 0LL;
  v7 = -2147023728;
  AcquireSRWLockShared(v4);
  if ( *((_QWORD *)this + 66) && ((*((_BYTE *)this + 464) & 1) != 0 || a2) )
  {
    *a3 = 0LL;
    v8 = *((_QWORD *)this + 66);
    if ( v8 )
    {
      v9 = *((_QWORD *)this + 67);
      v10 = -1LL;
      memset(pv, 0, 24);
      if ( v9 == -1LL )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( *(_WORD *)(v8 + 2 * v9) );
      }
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)(v8 + 2 * v11) );
      if ( v9 == -1LL )
      {
        v9 = v11;
        v10 = v11;
      }
      else if ( v9 < v11 )
      {
        v10 = v9;
      }
      else
      {
        do
          ++v10;
        while ( *(_WORD *)(v8 + 2 * v10) );
      }
      v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
              (__int64)pv,
              v9);
      v13 = pv[0];
      v7 = v12;
      if ( v12 < 0 )
        goto LABEL_20;
      v14 = v9 + 1;
      if ( v9 > 0x7FFFFFFE )
      {
        if ( v9 == -1LL )
          goto LABEL_20;
      }
      else if ( v10 <= 0x7FFFFFFE )
      {
        v15 = v10 - v14;
        v16 = pv[0];
        v17 = v8 - (unsigned __int64)pv[0];
        while ( v15 + v14 )
        {
          v18 = *(_WORD *)((char *)v16 + v17);
          if ( !v18 )
            break;
          *v16++ = v18;
          if ( !--v14 )
            goto LABEL_17;
        }
        if ( !v14 )
LABEL_17:
          --v16;
        *v16 = 0;
        goto LABEL_20;
      }
      *(_WORD *)pv[0] = 0;
LABEL_20:
      if ( v7 < 0 )
      {
        if ( v13 )
          CoTaskMemFree(v13);
      }
      else
      {
        *a3 = (unsigned __int16 *)v13;
      }
    }
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)v7;
}
