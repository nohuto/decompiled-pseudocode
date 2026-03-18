/*
 * XREFs of ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1C0021E60
 * Callers:
 *     ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0179100 (-AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESEN.c)
 *     ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02BB6D0 (-CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@.c)
 * Callees:
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C0005FFC (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

DMMVIDEOPRESENTTARGET *__fastcall DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
        DMMVIDEOPRESENTTARGET *this,
        struct DMMVIDEOPRESENTTARGETSET *const a2,
        int a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a4,
        enum _DXGK_CHILD_DEVICE_HPD_AWARENESS a5,
        enum _D3DKMDT_MONITOR_ORIENTATION_AWARENESS a6,
        char a7)
{
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  DMMVIDEOPRESENTTARGET *result; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>((__int64)this, a3);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  v11 = 0xFFFFFFFFLL;
  *((_DWORD *)this + 14) = 1833172996;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  v12 = 1LL;
  *((_QWORD *)this + 8) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 18) = 1;
  *((_DWORD *)this + 102) = -1;
  *(_QWORD *)this = &DMMVIDEOPRESENTTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ContainedBy<DMMVIDEOPRESENTTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDEOPRESENTTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ReferenceCounted'};
  *((_DWORD *)this + 24) = a5;
  *((_DWORD *)this + 25) = a6;
  *((_DWORD *)this + 20) = a4;
  *((_DWORD *)this + 21) = a4;
  *((_DWORD *)this + 22) = 0;
  *((_BYTE *)this + 104) = a7;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 1;
  *((_DWORD *)this + 31) = -1;
  *((_DWORD *)this + 32) = -1;
  *((_DWORD *)this + 98) = 0;
  *((_BYTE *)this + 396) = 0;
  *((_DWORD *)this + 100) = -1;
  *((_WORD *)this + 202) = 0;
  *((_BYTE *)this + 406) = 0;
  *((_WORD *)this + 206) = 1;
  *(_DWORD *)((char *)this + 415) = 0;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  if ( a7 )
  {
    if ( (unsigned int)(a4 + 1) > 0xF || (v11 = 32797LL, !_bittest((const int *)&v11, a4 + 1)) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v11, 1LL);
      WdLogEvent5_WdAssertion(v14);
    }
  }
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v11, v12);
      WdLogEvent5_WdAssertion(v16);
    }
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v11, v12, v10);
    *(_QWORD *)(v15 + 24) = (char *)this + 32;
    *(_QWORD *)(v15 + 32) = *((_QWORD *)this + 5);
    WdLogEvent5_WdError(v15);
  }
  memset((char *)this + 136, 0, 0x100uLL);
  *((_QWORD *)this + 69) = 0LL;
  *((_DWORD *)this + 140) = 0;
  memset((char *)this + 568, 0, 0x30uLL);
  *((_QWORD *)this + 56) = (char *)this + 440;
  *((_QWORD *)this + 55) = (char *)this + 440;
  *((_QWORD *)this + 61) = (char *)this + 480;
  *((_QWORD *)this + 60) = (char *)this + 480;
  result = this;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  return result;
}
