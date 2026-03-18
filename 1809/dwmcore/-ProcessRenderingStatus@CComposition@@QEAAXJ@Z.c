/*
 * XREFs of ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x1800CE718
 * Callers:
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x1800C7968 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800CD560 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x1800CEAD0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180152AAC (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 * Callees:
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x18007AD94 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x18008A454 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x18008ACCC (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18009DAB4 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CComposition::ProcessRenderingStatus(CComposition *this, int a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v4; // esi
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  _DWORD v13[3]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+3Ch] [rbp-1Ch]
  __int64 v15; // [rsp+44h] [rbp-14h]

  v3 = *((_DWORD *)this + 88);
  v4 = v3;
  if ( a2 < 0 )
    v6 = 1;
  else
    v6 = (a2 != 142213121) + 2;
  if ( v6 <= 1 )
  {
    v3 = 1;
    if ( v4 != 2 )
      goto LABEL_7;
    v11 = CMmcssTask::Apply((struct _RTL_CRITICAL_SECTION *)((char *)this + 144), 0);
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xB31u);
LABEL_13:
    CComposition::UpdateMmcssPartners(this);
    goto LABEL_7;
  }
  if ( v6 == 2 )
  {
    v3 = 2;
    if ( v4 == 2 )
      goto LABEL_7;
    CMmcssTask::Revert((struct _RTL_CRITICAL_SECTION *)((char *)this + 144));
    goto LABEL_13;
  }
  if ( v6 == 3 )
  {
    v3 = 0;
    if ( v4 == 2 )
    {
      v9 = CMmcssTask::Apply((struct _RTL_CRITICAL_SECTION *)((char *)this + 144), 0);
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xB21u);
      goto LABEL_13;
    }
  }
LABEL_7:
  *((_DWORD *)this + 88) = v3;
  if ( v3 != v4 )
  {
    v8 = *((_QWORD *)this + 45);
    if ( v8 && v3 == 1 )
      *(_BYTE *)(v8 + 20) = 1;
    v13[0] = 5;
    v13[1] = 0;
    v13[2] = v4;
    v14 = v3;
    v15 = 0LL;
    CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)v13, a3);
  }
  v7 = *((_QWORD *)this + 45);
  if ( v7 && v3 == 2 )
  {
    if ( *((_DWORD *)this + 118) )
      *(_BYTE *)(v7 + 20) = 1;
  }
}
