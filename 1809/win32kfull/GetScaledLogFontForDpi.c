/*
 * XREFs of GetScaledLogFontForDpi @ 0x1C00AB0C0
 * Callers:
 *     GetWindowNCMetricsForDpi @ 0x1C001F918 (GetWindowNCMetricsForDpi.c)
 *     _SystemParametersInfoForDpi @ 0x1C00A83BC (_SystemParametersInfoForDpi.c)
 *     GetWindowNCMetrics @ 0x1C00AA6A4 (GetWindowNCMetrics.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 *     GetDPIMETRICSForDpiUnsafe @ 0x1C00AB77C (GetDPIMETRICSForDpiUnsafe.c)
 *     GetDPIServerInfoForDpi @ 0x1C00AB7B4 (GetDPIServerInfoForDpi.c)
 *     DeleteMetricsFont @ 0x1C00BEF80 (DeleteMetricsFont.c)
 *     CreateScaledFont @ 0x1C01B8B58 (CreateScaledFont.c)
 */

_BOOL8 __fastcall GetScaledLogFontForDpi(unsigned int a1, unsigned int a2, __int64 a3)
{
  HSURF *DPIMETRICSForDpiUnsafe; // rax
  BOOL v7; // esi
  int v8; // ebp
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  INT v13; // r8d
  HSURF v14; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  HSURF v19; // [rsp+78h] [rbp+20h] BYREF

  DPIMETRICSForDpiUnsafe = 0LL;
  v7 = 0;
  if ( a1 <= 3 )
    DPIMETRICSForDpiUnsafe = (HSURF *)GetDPIMETRICSForDpiUnsafe(a2);
  v19 = 0LL;
  v8 = 0;
  if ( !a1 )
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v14 = DPIMETRICSForDpiUnsafe[8];
      goto LABEL_13;
    }
    v16 = *(_QWORD *)(Get96DpiMetrics() + 64);
    goto LABEL_30;
  }
  v9 = a1 - 1;
  if ( !v9 )
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v14 = DPIMETRICSForDpiUnsafe[4];
      goto LABEL_13;
    }
    v16 = *(_QWORD *)(Get96DpiMetrics() + 32);
    goto LABEL_30;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v14 = *DPIMETRICSForDpiUnsafe;
      goto LABEL_13;
    }
    v16 = *(_QWORD *)Get96DpiMetrics();
    goto LABEL_30;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v14 = DPIMETRICSForDpiUnsafe[7];
      goto LABEL_13;
    }
    v16 = *(_QWORD *)(Get96DpiMetrics() + 56);
LABEL_30:
    v18 = CreateScaledFont(v16, &v19, v17, a2, 0LL, 0LL, 0LL);
    v14 = v19;
    v8 = v18;
    goto LABEL_13;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      *(_OWORD *)a3 = *(_OWORD *)(gpsi + 5004LL);
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(gpsi + 5020LL);
      *(_OWORD *)(a3 + 32) = *(_OWORD *)(gpsi + 5036LL);
      *(_OWORD *)(a3 + 48) = *(_OWORD *)(gpsi + 5052LL);
      *(_OWORD *)(a3 + 64) = *(_OWORD *)(gpsi + 5068LL);
      *(_QWORD *)(a3 + 80) = *(_QWORD *)(gpsi + 5084LL);
      *(_DWORD *)(a3 + 88) = *(_DWORD *)(gpsi + 5092LL);
      v13 = *(unsigned __int16 *)(gpsi + 6998LL);
      if ( a2 != v13 )
      {
        *(_DWORD *)(a3 + 4) = EngMulDiv(*(_DWORD *)(a3 + 4), a2, v13);
        *(_DWORD *)a3 = EngMulDiv(*(_DWORD *)a3, a2, *(unsigned __int16 *)(gpsi + 6998LL));
      }
      return 1;
    }
    return v7;
  }
  v14 = *(HSURF *)(GetDPIServerInfoForDpi(a2) + 8);
LABEL_13:
  if ( v14 )
    v7 = GreExtGetObjectW(v14, 92LL, (char *)a3) != 0;
  if ( v8 )
    DeleteMetricsFont(v14);
  return v7;
}
