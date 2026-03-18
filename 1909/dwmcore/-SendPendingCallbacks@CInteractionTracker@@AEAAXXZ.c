/*
 * XREFs of ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x1801DAD64
 * Callers:
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ @ 0x1801D97AC (-NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ.c)
 * Callees:
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1801DAFD4 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x1801DB370 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z.c)
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x1801DC54C (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 */

void __fastcall CInteractionTracker::SendPendingCallbacks(CInteractionTracker *this)
{
  __int64 v2; // rcx
  bool v3; // di
  __int64 v4; // r9
  __int64 v5; // r8
  int v6; // eax
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rsi
  unsigned int v12; // ecx
  __int64 v13; // rdi
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  unsigned int v16; // ecx
  float v17; // xmm0_4
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-50h]
  int v22; // [rsp+20h] [rbp-50h]
  __int64 v23; // [rsp+38h] [rbp-38h]
  __int64 v24; // [rsp+50h] [rbp-20h] BYREF
  int v25; // [rsp+58h] [rbp-18h]
  __int64 v26; // [rsp+60h] [rbp-10h] BYREF
  __int64 v27; // [rsp+68h] [rbp-8h]

  if ( CInteractionTracker::ShouldNotify(this, 0) )
  {
    if ( !*(_DWORD *)(v2 + 496)
      || (v3 = 1, *(_DWORD *)(*((_QWORD *)this + 59) + 24LL * (unsigned int)(*(_DWORD *)(v2 + 496) - 1))) )
    {
      v3 = 0;
    }
    CInteractionTracker::SendPendingStateChangeCallbacks(this, v3);
    LOBYTE(v4) = *((_BYTE *)this + 532);
    LOBYTE(v5) = 0;
    if ( (v4 & 6) != 0 )
    {
      v6 = *((_DWORD *)this + 20);
      LOBYTE(v4) = (v4 & 4) != 0;
      v24 = *((_QWORD *)this + 9);
      v25 = v6;
      v7 = CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v24, v5, v4);
      *((_BYTE *)this + 532) &= 0xF9u;
      LOBYTE(v5) = v7;
      if ( !v3 )
        return;
      v8 = 3LL * (unsigned int)(*((_DWORD *)this + 124) - 1);
      v9 = *((_QWORD *)this + 59);
      *(_QWORD *)(v9 + 8 * v8 + 4) = *((_QWORD *)this + 9);
      *(_DWORD *)(v9 + 8 * v8 + 12) = *((_DWORD *)this + 20);
      *(_DWORD *)(*((_QWORD *)this + 59) + 24LL * (unsigned int)(*((_DWORD *)this + 124) - 1) + 16) = *((_DWORD *)this + 32);
    }
    if ( v3 && *((char *)this + 532) >= 0 && !(_BYTE)v5 )
      CInteractionTracker::SendPendingStateChangeCallbacks(this, 0);
  }
  else
  {
    v10 = *((_DWORD *)this + 124);
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 1224LL) + 48LL);
    v12 = 0;
    if ( v10 )
    {
      while ( 1 )
      {
        v13 = v12;
        if ( !*(_DWORD *)(*((_QWORD *)this + 59) + 24LL * v12) )
          break;
        if ( ++v12 >= v10 )
          goto LABEL_23;
      }
      v14 = *((_QWORD *)this + 9);
      v25 = *((_DWORD *)this + 20);
      v15 = *((_QWORD *)this + 6);
      v24 = v14;
      if ( v15 )
        v16 = *(_DWORD *)(v15 + 68);
      else
        v16 = 0;
      v17 = *((float *)this + 32);
      v26 = v16;
      v27 = *((unsigned int *)this + 14);
      LOWORD(v21) = 0;
      CoreUICallSend(v11, &v26, 2LL, 8LL, v21, &unk_1802B1154, (unsigned int)&v24, v17);
      v18 = *((_QWORD *)this + 6);
      v19 = *((_QWORD *)this + 59);
      if ( v18 )
        v20 = *(unsigned int *)(v18 + 68);
      else
        v20 = 0LL;
      v26 = v20;
      v27 = *((unsigned int *)this + 14);
      LODWORD(v23) = *(unsigned __int8 *)(v19 + 24 * v13 + 20);
      LOWORD(v22) = 3;
      CoreUICallSend(
        v11,
        &v26,
        2LL,
        8LL,
        v22,
        &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_g4wxz6Aysb2Q9KceQQJGbqWOkM0,
        *((_DWORD *)this + 45),
        v23);
    }
LABEL_23:
    *((_DWORD *)this + 124) = 0;
  }
}
