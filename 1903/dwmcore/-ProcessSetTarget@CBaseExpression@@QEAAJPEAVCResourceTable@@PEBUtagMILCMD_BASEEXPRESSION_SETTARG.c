/*
 * XREFs of ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x1800828E0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180082990 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180083C40 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x1801E7358 (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetTarget(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETTARGET *a3)
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
  v7 = *((_BYTE *)v6 + 208) & 0xDF | (*((_BYTE *)a3 + 40) != 0 ? 0x20 : 0);
  *((_BYTE *)v6 + 208) = v7;
  if ( (v7 & 0x20) == 0 || CBaseExpression::GetAnimationLoggingManagerNoRef(v6) )
  {
    v13 = *((_BYTE *)a3 + 32);
    v8 = CBaseExpression::SetTarget(
           v6,
           *((unsigned int *)v5 + 12),
           ResourceWithoutType,
           *((unsigned int *)a3 + 4),
           *((_DWORD *)a3 + 9),
           *((unsigned __int16 *)a3 + 17),
           v13,
           *((_QWORD *)a3 + 3));
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x60u, 0LL);
    else
      return 0;
  }
  else
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2003303421, 0x56u, 0LL);
  }
  return v10;
}
