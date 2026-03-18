/*
 * XREFs of ?CreateInputPointerNode@CTouchProcessor@@AEAA_NPEAUtagPOINTEREVENTINT@@@Z @ 0x1C0164928
 * Callers:
 *     ?CreateInputPointerNodesForFrame@CTouchProcessor@@AEAA_NPEAX@Z @ 0x1C0164AD4 (-CreateInputPointerNodesForFrame@CTouchProcessor@@AEAA_NPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C0164BE8 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C01667CC (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

char __fastcall CTouchProcessor::CreateInputPointerNode(CTouchProcessor *this, struct tagPOINTEREVENTINT *a2)
{
  unsigned __int16 v2; // bp
  unsigned int v3; // r14d
  char v4; // di
  unsigned int v5; // r15d
  void *v8; // rdx
  int v9; // edx
  struct CInputPointerNode *NodeById; // r10
  int v11; // edx
  __int64 v13; // rax

  v2 = *(_WORD *)a2;
  v3 = *((_DWORD *)a2 + 2);
  v4 = 0;
  v5 = *((_DWORD *)a2 + 5);
  v8 = &WPP_06d7dff703a03015e007562f188a8383_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v8,
      7,
      237,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  NodeById = CTouchProcessor::FindNodeById(this, v2, 1, 1);
  if ( NodeById || (NodeById = CTouchProcessor::CreateNode(this, v2, v3, v5), v4 = 1, NodeById) )
  {
    *((_DWORD *)a2 + 3) = *((unsigned __int16 *)NodeById + 16);
    if ( v4 )
      *((_DWORD *)a2 + 5) |= 1u;
    v13 = *(_QWORD *)((char *)NodeById + 36);
    if ( !v13 )
      v13 = *(_QWORD *)((char *)NodeById + 44);
    if ( !v13 )
      *(_OWORD *)((char *)NodeById + 36) = *((_OWORD *)a2 + 10);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v9) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        7,
        240,
        (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    }
    return 1;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v9, 7, 238, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v11) = 5;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v11,
            7,
            239,
            (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
        }
      }
    }
    return 0;
  }
}
