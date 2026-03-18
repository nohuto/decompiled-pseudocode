/*
 * XREFs of ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x1800BD3B4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x1800BD464 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA68 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x18018C3B8 (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetTarget(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETTARGET *a3)
{
  unsigned int v3; // r9d
  struct CResource *ResourceWithoutType; // rbx
  struct CResourceTable *v5; // r11
  CBaseExpression *v6; // r10
  char v7; // dl
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  unsigned int v12; // ecx
  char v13; // [rsp+30h] [rbp-18h]

  v3 = *((_DWORD *)a3 + 3);
  ResourceWithoutType = 0LL;
  v5 = a2;
  v6 = this;
  if ( v3 )
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v3);
  *((_DWORD *)v6 + 50) = v3;
  *((_DWORD *)v6 + 51) = *((_DWORD *)a3 + 2);
  v7 = *((_BYTE *)v6 + 208) & 0xDF | (*((_DWORD *)a3 + 9) != 0 ? 0x20 : 0);
  *((_BYTE *)v6 + 208) = v7;
  if ( (v7 & 0x20) == 0 || CBaseExpression::GetAnimationLoggingManagerNoRef(v6) )
  {
    v13 = *((_BYTE *)a3 + 28);
    v8 = CBaseExpression::SetTarget(
           v6,
           *((unsigned int *)v5 + 12),
           ResourceWithoutType,
           *((unsigned int *)a3 + 4),
           *((_DWORD *)a3 + 8),
           *((unsigned __int16 *)a3 + 15),
           v13,
           *(_QWORD *)((char *)a3 + 20));
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x65u);
    else
      return 0;
  }
  else
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2003303421, 0x5Bu);
  }
  return v10;
}
