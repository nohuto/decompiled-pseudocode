/*
 * XREFs of ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z @ 0x1C01956A0
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0197AA8 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C0198B50 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1C0198F60 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0199184 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C0199554 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 */

__int64 __fastcall CPTPEngine::DoTPDiscreteButtonProcessing(CPTPEngine *this, struct PTPInput *a2, int *a3, int *a4)
{
  int v4; // r9d
  int v5; // r13d
  int v6; // r12d
  int v9; // r8d
  unsigned int v11; // ecx
  int v12; // esi
  int v13; // edx
  int v14; // r9d
  int v15; // r15d
  int v16; // eax
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // edx
  int v20; // r14d
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __int128 v37; // [rsp+40h] [rbp-20h] BYREF
  __int64 v38; // [rsp+50h] [rbp-10h]
  int v39; // [rsp+A0h] [rbp+40h]
  int v40; // [rsp+A8h] [rbp+48h]

  v4 = *((_DWORD *)this + 742);
  v5 = 0;
  v6 = 0;
  v9 = 0;
  v11 = *((_DWORD *)this + 814);
  v12 = v4 & 0x20;
  v39 = 0;
  v13 = v12 != 0;
  v14 = v4 & 0x40;
  v40 = v14;
  v15 = v14 != 0;
  if ( (unsigned __int8)(v11 & 2) >> 1 != v13 )
  {
    v16 = *((_DWORD *)this + 743);
    if ( (v16 == 3 || v16 == 6) && v12 )
    {
      v17 = v11 | 0x400;
    }
    else
    {
      v17 = v11;
      if ( !v12 && (v11 & 0x400) != 0 )
      {
        v5 = 1;
        v17 = v11 & 0xFFFFFBFF;
      }
    }
    v6 = 1;
    v11 = (2 * v13) | v17 & 0xFFFFFFFD;
    *((_DWORD *)this + 814) = v11;
    if ( v12 )
    {
      CPTPEngine::TPAAPSetCurtainState(this, 0);
      v11 = *((_DWORD *)this + 814);
      v9 = 0;
      v14 = v40;
      *((_QWORD *)this + 384) = *(_QWORD *)a2;
      *((_DWORD *)this + 766) = *((_DWORD *)a2 + 6);
    }
    *a3 = 1;
  }
  if ( (unsigned __int8)(v11 & 4) >> 2 == v15 )
  {
    v20 = 0;
  }
  else
  {
    v18 = *((_DWORD *)this + 743);
    if ( (v18 == 3 || v18 == 6) && v14 )
    {
      v19 = v11 | 0x800;
    }
    else
    {
      v19 = v11;
      if ( !v14 && (v11 & 0x800) != 0 )
      {
        v9 = 1;
        v39 = 1;
        v19 = v11 & 0xFFFFF7FF;
      }
    }
    v20 = 1;
    *((_DWORD *)this + 814) = v19 & 0xFFFFFFFB | (4 * v15);
    if ( v14 )
    {
      CPTPEngine::TPAAPSetCurtainState(this, 0);
      v9 = v39;
      *((_QWORD *)this + 384) = *(_QWORD *)a2;
      *((_DWORD *)this + 766) = *((_DWORD *)a2 + 6);
    }
    *a4 = 1;
  }
  v21 = *((_DWORD *)this + 743);
  if ( v21 == 3 || v21 == 6 || v5 || v9 )
    return 1LL;
  if ( v6 )
  {
    if ( !v12 )
    {
      v22 = *((_DWORD *)this + 814);
      v23 = v22;
      if ( (v22 & 0x80000) != 0 )
      {
        if ( (v22 & 0x10) != 0 && (v22 & 0x40) != 0 && (v22 & 0x100) == 0 )
        {
          *((_QWORD *)this + 403) = *(_QWORD *)a2;
          CBasePTPEngine::SendMouseOutput(this, 4LL, *(_QWORD *)((char *)a2 + 28));
          v23 = *((_DWORD *)this + 814) & 0xFFFFFFEF;
        }
        v24 = v23 & 0xFFFFFFBF;
      }
      else
      {
        if ( (v22 & 8) != 0 && (v22 & 0x20) != 0 && (v22 & 0x80u) == 0 )
        {
          *((_QWORD *)this + 403) = *(_QWORD *)a2;
          CBasePTPEngine::SendMouseOutput(this, 2LL, *(_QWORD *)((char *)a2 + 28));
          v23 = *((_DWORD *)this + 814) & 0xFFFFFFF7;
        }
        v24 = v23 & 0xFFFFFFDF;
      }
      goto LABEL_49;
    }
    if ( *((_DWORD *)this + 735) && (*((_DWORD *)this + 814) & 0x80000) == 0 )
      *((_DWORD *)this + 735) = 0;
    if ( *((_DWORD *)a2 + 10) || (v25 = 0, *((_DWORD *)a2 + 13)) )
    {
      CBasePTPEngine::SendInertiaOutput(this, 3LL);
      v25 = *((_DWORD *)a2 + 10);
    }
    v26 = *((_DWORD *)this + 814);
    if ( v25 )
    {
      v24 = v26 | 0x400;
LABEL_49:
      *((_DWORD *)this + 814) = v24;
      goto LABEL_55;
    }
    if ( (v26 & 0x80000) != 0 )
    {
      v27 = v26 | 0x40;
      *((_DWORD *)this + 814) = v27;
      if ( (v27 & 0x10) == 0 )
      {
        v38 = 0LL;
        v37 = 6uLL;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v37);
        CBasePTPEngine::SendMouseOutput(this, 3LL, *(_QWORD *)((char *)a2 + 28));
        *((_DWORD *)this + 814) |= 0x10u;
      }
    }
    else
    {
      v28 = v26 | 0x20;
      *((_DWORD *)this + 814) = v28;
      if ( (v28 & 8) == 0 )
      {
        v38 = 0LL;
        v37 = 5uLL;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v37);
        CBasePTPEngine::SendMouseOutput(this, 1LL, *(_QWORD *)((char *)a2 + 28));
        *((_DWORD *)this + 814) |= 8u;
      }
    }
  }
LABEL_55:
  if ( v20 )
  {
    if ( !v40 )
    {
      v29 = *((_DWORD *)this + 814);
      v30 = v29;
      if ( (v29 & 0x80000) != 0 )
      {
        if ( (v29 & 8) != 0 && (v29 & 0x20) != 0 && (v29 & 0x80u) == 0 )
        {
          *((_QWORD *)this + 403) = *(_QWORD *)a2;
          CBasePTPEngine::SendMouseOutput(this, 2LL, *(_QWORD *)((char *)a2 + 28));
          v30 = *((_DWORD *)this + 814) & 0xFFFFFFF7;
        }
        v31 = v30 & 0xFFFFFFDF;
      }
      else
      {
        if ( (v29 & 0x10) != 0 && (v29 & 0x40) != 0 && (v29 & 0x100) == 0 )
        {
          *((_QWORD *)this + 403) = *(_QWORD *)a2;
          CBasePTPEngine::SendMouseOutput(this, 4LL, *(_QWORD *)((char *)a2 + 28));
          v30 = *((_DWORD *)this + 814) & 0xFFFFFFEF;
        }
        v31 = v30 & 0xFFFFFFBF;
      }
      goto LABEL_76;
    }
    if ( *((_DWORD *)this + 735) && (*((_DWORD *)this + 814) & 0x80000) != 0 )
      *((_DWORD *)this + 735) = 0;
    if ( *((_DWORD *)a2 + 10) || (v32 = 0, *((_DWORD *)a2 + 13)) )
    {
      CBasePTPEngine::SendInertiaOutput(this, 3LL);
      v32 = *((_DWORD *)a2 + 10);
    }
    v33 = *((_DWORD *)this + 814);
    if ( v32 )
    {
      v31 = v33 | 0x800;
LABEL_76:
      *((_DWORD *)this + 814) = v31;
      return 1LL;
    }
    if ( (v33 & 0x80000) != 0 )
    {
      v34 = v33 | 0x20;
      *((_DWORD *)this + 814) = v34;
      if ( (v34 & 8) == 0 )
      {
        v38 = 0LL;
        v37 = 5uLL;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v37);
        CBasePTPEngine::SendMouseOutput(this, 1LL, *(_QWORD *)((char *)a2 + 28));
        *((_DWORD *)this + 814) |= 8u;
      }
    }
    else
    {
      v35 = v33 | 0x40;
      *((_DWORD *)this + 814) = v35;
      if ( (v35 & 0x10) == 0 )
      {
        v38 = 0LL;
        v37 = 6uLL;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v37);
        CBasePTPEngine::SendMouseOutput(this, 3LL, *(_QWORD *)((char *)a2 + 28));
        *((_DWORD *)this + 814) |= 0x10u;
      }
    }
  }
  return 1LL;
}
