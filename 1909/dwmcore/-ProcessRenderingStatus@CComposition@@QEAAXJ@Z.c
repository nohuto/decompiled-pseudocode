/*
 * XREFs of ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x180075570
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800716E0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180074920 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x180077538 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180187A84 (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x1800D0C24 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800D0F2C (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800D1030 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800D4D7C (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 */

void __fastcall CComposition::ProcessRenderingStatus(CComposition *this, int a2)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  unsigned int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  signed int v8; // eax
  __int64 v9; // rcx
  signed int v10; // eax
  __int64 v11; // rcx
  _DWORD v12[3]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+3Ch] [rbp-1Ch]
  __int64 v14; // [rsp+44h] [rbp-14h]

  v2 = *((_DWORD *)this + 92);
  v3 = v2;
  if ( a2 < 0 )
    v5 = 1;
  else
    v5 = (a2 != 142213121) + 2;
  if ( v5 <= 1 )
  {
    v2 = 1;
    if ( v3 != 2 )
      goto LABEL_7;
    v10 = CMmcssTask::Apply((CComposition *)((char *)this + 160), 0);
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xA6Eu, 0LL);
LABEL_13:
    CComposition::UpdateMmcssPartners(this);
    goto LABEL_7;
  }
  if ( v5 == 2 )
  {
    v2 = 2;
    if ( v3 == 2 )
      goto LABEL_7;
    CMmcssTask::Revert((CComposition *)((char *)this + 160));
    goto LABEL_13;
  }
  if ( v5 == 3 )
  {
    v2 = 0;
    if ( v3 == 2 )
    {
      v8 = CMmcssTask::Apply((CComposition *)((char *)this + 160), 0);
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xA5Eu, 0LL);
      goto LABEL_13;
    }
  }
LABEL_7:
  *((_DWORD *)this + 92) = v2;
  if ( v2 != v3 )
  {
    v7 = *((_QWORD *)this + 47);
    if ( v7 && v2 == 1 )
      *(_BYTE *)(v7 + 20) = 1;
    v12[0] = 5;
    v12[1] = 0;
    v12[2] = v3;
    v13 = v2;
    v14 = 0LL;
    CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)v12);
  }
  v6 = *((_QWORD *)this + 47);
  if ( v6 && v2 == 2 )
  {
    if ( *((_DWORD *)this + 122) )
      *(_BYTE *)(v6 + 20) = 1;
  }
}
