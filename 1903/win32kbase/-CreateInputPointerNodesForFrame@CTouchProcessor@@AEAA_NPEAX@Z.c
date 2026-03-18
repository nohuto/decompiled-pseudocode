/*
 * XREFs of ?CreateInputPointerNodesForFrame@CTouchProcessor@@AEAA_NPEAX@Z @ 0x1C0164AD4
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0170610 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?CreateInputPointerNode@CTouchProcessor@@AEAA_NPEAUtagPOINTEREVENTINT@@@Z @ 0x1C0164928 (-CreateInputPointerNode@CTouchProcessor@@AEAA_NPEAUtagPOINTEREVENTINT@@@Z.c)
 */

char __fastcall CTouchProcessor::CreateInputPointerNodesForFrame(CTouchProcessor *this, _DWORD *a2)
{
  _DWORD *v2; // rdi
  unsigned int v4; // ebx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      34,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  v4 = 0;
  if ( v2[12] )
  {
    while ( CTouchProcessor::CreateInputPointerNode(
              this,
              (struct tagPOINTEREVENTINT *)(496LL * v4 + *((_QWORD *)v2 + 16) + 168LL)) )
    {
      if ( ++v4 >= v2[12] )
        goto LABEL_7;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        7,
        35,
        (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    }
    return 0;
  }
  else
  {
LABEL_7:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)a2,
          7,
          36,
          (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
      }
    }
    return 1;
  }
}
