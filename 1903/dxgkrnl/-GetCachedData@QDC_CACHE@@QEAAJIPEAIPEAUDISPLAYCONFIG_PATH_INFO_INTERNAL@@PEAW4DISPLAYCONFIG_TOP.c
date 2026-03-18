/*
 * XREFs of ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x1C00D4700
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C00D4620 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002D34 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000BE6C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QDC_CACHE::GetCachedData(
        struct DXGFASTMUTEX *const *this,
        __int64 a2,
        unsigned int *a3,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a5,
        unsigned int *a6)
{
  __int64 v8; // rdi
  DXGPROCESS *Current; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  char *v13; // rbx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rax
  int v17; // edi
  struct DXGPROCESS *v18; // rax
  int v19; // ecx
  unsigned int v20; // ebx
  _QWORD *v22; // rax
  _BYTE v23[40]; // [rsp+30h] [rbp-28h] BYREF

  v8 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = 274LL;
    return 3221225659LL;
  }
  else
  {
    Current = DXGPROCESS::GetCurrent();
    if ( DXGPROCESS::IsRemoteConnection(Current) )
    {
      return 3221225473LL;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, this[1], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
      v13 = (char *)(this + 2);
      v14 = *((unsigned int *)this + 148);
      *a6 = v14;
      v15 = 0;
      while ( !*v13 || *((_DWORD *)v13 + 1) != (_DWORD)v8 )
      {
        ++v15;
        v13 += 32;
        if ( v15 >= 0x12 )
        {
          v13 = 0LL;
          break;
        }
      }
      if ( v13 )
      {
        v16 = *((unsigned int *)v13 + 2);
        if ( (unsigned int)v16 > *a3 )
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v11, v12);
          v22[3] = v8;
          v22[4] = *((unsigned int *)v13 + 2);
          v22[5] = *a3;
          WdLogEvent5_WdWarning(v22);
          v20 = -1073741823;
        }
        else
        {
          memmove(a4, *((const void **)v13 + 2), 200 * v16);
          *a3 = *((_DWORD *)v13 + 2);
          if ( a5 )
            *(_DWORD *)a5 = *((_DWORD *)v13 + 6);
          v17 = *((_DWORD *)this + 148);
          v18 = DXGPROCESS::GetCurrent();
          if ( v17 == *((_DWORD *)v18 + 102) )
          {
            v19 = *((_DWORD *)v18 + 101);
          }
          else
          {
            *((_DWORD *)v18 + 102) = v17;
            v19 = 0;
          }
          *((_DWORD *)v18 + 101) = v19 + 1;
          if ( (v19 & (v19 + 1)) == 0 && v19 != 1 )
            DxgkLogCodePointPacket(0x4Du, v19 + 1, *((_DWORD *)v13 + 1), *((_DWORD *)v13 + 7), 0LL);
          v20 = 0;
        }
      }
      else
      {
        v20 = -1073741801;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v11) + 24) = v8;
      }
      if ( v23[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
      return v20;
    }
  }
}
