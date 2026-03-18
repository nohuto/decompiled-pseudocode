/*
 * XREFs of ?GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI@Z @ 0x1C0140224
 * Callers:
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C01400C0 (DxgkGetDisplayConfigBufferSizes.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000C05C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QDC_CACHE::GetCachedBufferSizes(struct DXGFASTMUTEX *const *this, __int64 a2, unsigned int *a3)
{
  __int64 v4; // rdi
  DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  char *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = 233LL;
    return 3221225659LL;
  }
  else
  {
    Current = DXGPROCESS::GetCurrent((__int64)this, a2);
    if ( DXGPROCESS::IsRemoteConnection(Current) )
    {
      return 3221225473LL;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, this[1], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
      v8 = (char *)(this + 2);
      v9 = 0LL;
      while ( !*v8 || *((_DWORD *)v8 + 1) != (_DWORD)v4 )
      {
        v9 = (unsigned int)(v9 + 1);
        v8 += 32;
        if ( (unsigned int)v9 >= 0x12 )
        {
          v8 = 0LL;
          break;
        }
      }
      if ( v8 )
      {
        v10 = 0;
        *a3 = *((_DWORD *)v8 + 2);
      }
      else
      {
        v10 = -1073741823;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v7) + 24) = v4;
      }
      if ( v12[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
      return v10;
    }
  }
}
