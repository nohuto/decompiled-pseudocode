/*
 * XREFs of ?Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C008A470
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAJXZ @ 0x1C008A53C (-InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAJXZ.c)
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C008A5E0 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::Init(
        VIDMM_APERTURE_SEGMENT *this,
        void (*a2)(void *),
        union _LARGE_INTEGER *a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v14 + 24) = *((unsigned int *)this + 4);
    *(_QWORD *)(v14 + 32) = this;
  }
  if ( (*((_DWORD *)this + 20) & 0x2000) != 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(this, a2);
    WdLogEvent5_WdWarning(v15);
    return 3221225485LL;
  }
  else
  {
    result = VIDMM_SEGMENT::Init(this, a2, a3);
    if ( (int)result >= 0 )
    {
      *((_QWORD *)this + 16) = 0LL;
      result = VIDMM_APERTURE_SEGMENT::InitializeGuardPages(this);
      v9 = result;
      if ( (int)result >= 0 )
      {
        v10 = WdLogNewEntry5_WdEvent(v8, v7);
        WdLogEvent5_WdEvent(v10);
        v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11);
        v13[3] = *((_QWORD *)this + 6);
        v13[4] = *((int *)this + 7);
        v13[5] = *((unsigned int *)this + 6);
        v13[6] = *((unsigned int *)this + 4);
        WdLogEvent5_WdEvent(v13);
        return v9;
      }
    }
  }
  return result;
}
