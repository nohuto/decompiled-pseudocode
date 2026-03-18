/*
 * XREFs of ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C005C3F8
 * Callers:
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C005C298 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C005C33C (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C006E404 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ @ 0x1C0082E30 (-EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ.c)
 *     ?AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C0169BDC (-AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1C016A420 (-AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z.c)
 *     ?SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C016C010 (-SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationCha.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C016FF30 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall DirectComposition::CDCompDynamicArrayBase::Grow(
        DirectComposition::CDCompDynamicArrayBase *this,
        __int64 a2,
        unsigned int a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r10
  signed int v8; // ebx
  unsigned __int64 v9; // rdi
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  char *v14; // rbp
  __int64 v15; // rax
  unsigned __int64 v16; // kr00_8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax

  v3 = *((_QWORD *)this + 3);
  v4 = -1LL;
  if ( v3 + a2 >= v3 )
    v4 = v3 + a2;
  v8 = v3 + a2 < v3 ? 0xC0000095 : 0;
  if ( v3 + a2 >= v3 )
  {
    v9 = *((_QWORD *)this + 2);
    if ( v4 > v9 )
    {
      if ( !v9 )
        v9 = 64LL;
      while ( v9 < v4 && v9 < 0x400 )
      {
        v16 = v9;
        v9 *= 2LL;
        if ( !is_mul_ok(v16, 2uLL) )
        {
          v9 = -1LL;
          v8 = -1073741675;
          break;
        }
        v8 = 0;
      }
      if ( v8 < 0 )
        return (unsigned int)-1073741801;
      do
      {
        v11 = v9;
        if ( v9 >= v4 )
          break;
        v17 = v9 + 1024;
        v18 = v9;
        v19 = -1LL;
        if ( v9 + 1024 >= v9 )
          v19 = v9 + 1024;
        v9 = v19;
        v8 = v17 < v18 ? 0xC0000095 : 0;
      }
      while ( v17 >= v11 );
      if ( v8 < 0 || !is_mul_ok(v9, *((_QWORD *)this + 4)) )
        return (unsigned int)-1073741801;
      v12 = v9 * *((_QWORD *)this + 4);
      v13 = *((_BYTE *)this + 8) ? Win32AllocPoolWithQuota(v12, a3) : Win32AllocPool(v12, a3);
      v14 = (char *)v13;
      v8 = v13 == 0 ? 0xC0000017 : 0;
      if ( !v13 )
        return (unsigned int)-1073741801;
      v15 = *((_QWORD *)this + 3);
      if ( v15 )
      {
        memmove(v14, *(const void **)this, v15 * *((_QWORD *)this + 4));
        v15 = *((_QWORD *)this + 3);
      }
      memset(&v14[v15 * *((_QWORD *)this + 4)], 0, *((_QWORD *)this + 4) * (v9 - v15));
      if ( *(_QWORD *)this )
        Win32FreePool(*(_QWORD *)this);
      *(_QWORD *)this = v14;
      *((_QWORD *)this + 2) = v9;
    }
  }
  if ( v8 < 0 )
    return (unsigned int)-1073741801;
  *((_QWORD *)this + 3) += a2;
  return (unsigned int)v8;
}
