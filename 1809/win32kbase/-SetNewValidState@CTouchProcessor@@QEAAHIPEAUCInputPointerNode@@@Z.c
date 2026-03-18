/*
 * XREFs of ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C0143990
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0134BD0 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C0136898 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV4@PEAKPEAGPEAIK@Z @ 0x1C0146A94 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInp.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_L @ 0x1C0147E7C (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0148078 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CTouchProcessor::SetNewValidState(struct _KTHREAD **this, __int64 a2, struct CInputPointerNode *a3)
{
  unsigned int v4; // esi
  void *v6; // rdx
  BOOL v7; // ebx
  int v9; // ebp
  bool v10; // zf
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  int v14; // [rsp+20h] [rbp-38h]

  v4 = a2;
  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v6 = &WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x3Bu,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    v6 = &WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids;
  }
  if ( (v4 & 0x70006) == 0x10006 )
  {
    v9 = 2;
  }
  else
  {
    if ( (v4 & 0x70006) == 0x20000 )
    {
      v10 = *((_DWORD *)a3 + 9) == 1;
      v9 = 3;
LABEL_21:
      v7 = v10;
      goto LABEL_26;
    }
    if ( (v4 & 0x70006) != 0x20002 )
    {
      if ( (v4 & 0x70006) == 0x20006 )
      {
        v9 = 2;
        v10 = *((_DWORD *)a3 + 9) == 2;
      }
      else
      {
        if ( (v4 & 0x70006) == 0x40000 )
        {
          v9 = 3;
        }
        else
        {
          if ( (v4 & 0x70006) != 0x40002 )
          {
            LOBYTE(v6) = 2;
            WPP_RECORDER_SF_L(
              (unsigned int)this[1],
              (_DWORD)v6,
              11,
              60,
              (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids,
              v4);
LABEL_12:
            v7 = 0;
LABEL_13:
            LOBYTE(v6) = 2;
            WPP_RECORDER_SF_LL((unsigned int)this[1], (_DWORD)v6, (_DWORD)a3, 61, v14, v4, *((_DWORD *)a3 + 9));
            goto LABEL_14;
          }
          v9 = 1;
        }
        v10 = *((_DWORD *)a3 + 9) == 2;
      }
      goto LABEL_21;
    }
    v9 = 1;
  }
  v7 = *((_DWORD *)a3 + 9) <= 1u;
LABEL_26:
  if ( !v7 )
    goto LABEL_13;
  if ( (v4 & 4) != 0 )
  {
    if ( (v4 & 0x1F0) == 0 )
      goto LABEL_12;
    v7 = 1;
  }
  if ( (*((_DWORD *)a3 + 82) & 8) != 0 )
  {
    v7 = (v4 & 0x8000) != 0;
    if ( (v4 & 0x8000) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, &WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids, a3);
  }
  if ( !v7 )
    goto LABEL_13;
  *((_DWORD *)a3 + 9) = v9;
  if ( v9 == 3 )
  {
    v11 = (_QWORD *)((char *)a3 + 16);
    v12 = *((_QWORD *)a3 + 2);
    if ( (struct CInputPointerNode *)v12 != (struct CInputPointerNode *)((char *)a3 + 16) )
    {
      if ( *(_QWORD **)(v12 + 8) != v11 || (v13 = (_QWORD *)*((_QWORD *)a3 + 3), (_QWORD *)*v13 != v11) )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      *((_QWORD *)a3 + 3) = (char *)a3 + 16;
      *v11 = v11;
    }
  }
  *((_DWORD *)a3 + 82) = *((_DWORD *)a3 + 82) & 0xFFFFFFF3 | ((v4 & 0x2000 | (v4 >> 1) & 0x4000) >> 11);
LABEL_14:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x3Eu,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  return v7;
}
