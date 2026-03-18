/*
 * XREFs of ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x1801A17EC
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18004F550 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 * Callees:
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1801A1A44 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x1801A1DA4 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z.c)
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x1801A2CFC (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
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
  unsigned int v11; // r8d
  __int64 v12; // rdi
  __int64 v13; // xmm0_8
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp-10h] BYREF
  __int64 v21; // [rsp+68h] [rbp-8h]

  if ( CInteractionTracker::ShouldNotify(this, 0) )
  {
    if ( !*(_DWORD *)(v2 + 496)
      || (v3 = 1, *(_DWORD *)(*((_QWORD *)this + 59) + 20LL * (unsigned int)(*(_DWORD *)(v2 + 496) - 1))) )
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
      v18 = *((_QWORD *)this + 9);
      v19 = v6;
      v7 = CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v18, v5, v4);
      *((_BYTE *)this + 532) &= 0xF9u;
      LOBYTE(v5) = v7;
      if ( !v3 )
        return;
      v8 = 5LL * (unsigned int)(*((_DWORD *)this + 124) - 1);
      v9 = *((_QWORD *)this + 59);
      *(_QWORD *)(v9 + 4 * v8 + 4) = *((_QWORD *)this + 9);
      *(_DWORD *)(v9 + 4 * v8 + 12) = *((_DWORD *)this + 20);
      *(_DWORD *)(*((_QWORD *)this + 59) + 20LL * (unsigned int)(*((_DWORD *)this + 124) - 1) + 16) = *((_DWORD *)this + 32);
    }
    if ( v3 && *((char *)this + 532) >= 0 && !(_BYTE)v5 )
      CInteractionTracker::SendPendingStateChangeCallbacks(this, 0);
  }
  else
  {
    v10 = 0;
    v11 = *((_DWORD *)this + 124);
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 1208LL) + 56LL);
    if ( v11 )
    {
      while ( *(_DWORD *)(*((_QWORD *)this + 59) + 20LL * v10) )
      {
        if ( ++v10 >= v11 )
          goto LABEL_23;
      }
      v13 = *((_QWORD *)this + 9);
      v19 = *((_DWORD *)this + 20);
      v14 = *((_QWORD *)this + 6);
      v18 = v13;
      if ( v14 )
        v15 = *(_DWORD *)(v14 + 68);
      else
        v15 = 0;
      v20 = v15;
      v21 = *((unsigned int *)this + 14);
      CoreUICallSend(v12, &v20, 2LL, 8LL, 0, &unk_1802763E4);
      v16 = *((_QWORD *)this + 6);
      if ( v16 )
        v17 = *(unsigned int *)(v16 + 68);
      else
        v17 = 0LL;
      v20 = v17;
      v21 = *((unsigned int *)this + 14);
      CoreUICallSend(v12, &v20, 2LL, 8LL, 3, &unk_1802763FD);
    }
LABEL_23:
    *((_DWORD *)this + 124) = 0;
  }
}
