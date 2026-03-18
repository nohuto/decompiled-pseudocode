/*
 * XREFs of NtUserSystemParametersInfo @ 0x1C00BA130
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceUIPISystemError @ 0x1C0013C10 (EtwTraceUIPISystemError.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C001E8B0 (CheckAccessForIntegrityLevelEx.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     xxxSystemParametersInfo @ 0x1C005C030 (xxxSystemParametersInfo.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     SetLastNtError @ 0x1C0142AA4 (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSystemParametersInfo(unsigned int a1, __int64 a2, __int64 a3, char a4)
{
  ULONG64 v5; // rsi
  __int64 v6; // r12
  unsigned int v8; // ebx
  struct tagTHREADINFO *v9; // rcx
  int v10; // eax
  __int64 CurrentProcessWin32Process; // rax
  bool v12; // zf
  unsigned int v13; // eax
  unsigned int v14; // eax
  bool v15; // zf
  bool v16; // zf
  unsigned int v17; // eax
  __int64 v18; // r13
  unsigned int v19; // eax
  unsigned int v20; // eax
  _DWORD *v21; // rax
  int v22; // ecx
  __int64 v23; // rcx
  unsigned int v24; // eax
  int v25; // eax
  const void *v26; // r15
  size_t v27; // rbx
  ULONG64 v28; // rdx
  _BYTE **v29; // rcx
  __int64 v30; // rax
  void *v31; // r13
  int v32; // r15d
  __int64 v33; // xmm1_8
  _DWORD *v34; // r9
  ULONG64 v35; // rdx
  __int64 v36; // rax
  ULONG64 v37; // r8
  _BYTE **v38; // rcx
  __int64 v39; // rax
  _OWORD *v40; // rdx
  __int64 v41; // rax
  _OWORD *v42; // rdx
  _OWORD *v43; // rax
  __int64 v44; // rax
  _OWORD *v45; // rdx
  ULONG64 v46; // rcx
  __int64 CurrentProcessWow64Process; // rax
  int v48; // edi
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  struct tagPROCESSINFO *v52; // rax
  int Size_4; // [rsp+24h] [rbp-324h]
  int Size_4a; // [rsp+24h] [rbp-324h]
  volatile void *Address; // [rsp+30h] [rbp-318h]
  _DWORD *Addressa; // [rsp+30h] [rbp-318h]
  _DWORD *v58; // [rsp+40h] [rbp-308h]
  char v59[8]; // [rsp+48h] [rbp-300h] BYREF
  void *v60; // [rsp+50h] [rbp-2F8h]
  int v61; // [rsp+58h] [rbp-2F0h]
  int v62; // [rsp+88h] [rbp-2C0h]
  const void *v63; // [rsp+90h] [rbp-2B8h]
  __int128 v64; // [rsp+98h] [rbp-2B0h]
  __int64 v65; // [rsp+A8h] [rbp-2A0h]
  _BYTE v66[24]; // [rsp+B0h] [rbp-298h] BYREF
  _BYTE v67[24]; // [rsp+C8h] [rbp-280h] BYREF
  _BYTE v68[616]; // [rsp+E0h] [rbp-268h] BYREF
  int v69; // [rsp+358h] [rbp+10h]
  unsigned int v70; // [rsp+368h] [rbp+20h]

  v69 = a2;
  v5 = a3;
  v6 = (unsigned int)a2;
  v8 = 0;
  Size_4 = 0;
  Address = 0LL;
  v60 = 0LL;
  v61 = 0;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v59, a2, a3);
  v70 = a4 & 3;
  v9 = gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 120) & 0x20000000) != 0 )
  {
    v9 = *(struct tagTHREADINFO **)(*((_QWORD *)gptiCurrent + 52) + 760LL);
    v10 = *((_DWORD *)v9 + 6) & 8;
  }
  else
  {
    v10 = 0;
  }
  if ( !v10 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    if ( CheckAccessForIntegrityLevelEx(*(_QWORD *)(CurrentProcessWin32Process + 872), 0xFFFFFFFF00002000uLL, 0) )
      goto LABEL_53;
  }
  if ( a1 <= 0x93 )
  {
    if ( a1 != 147 )
    {
      switch ( a1 )
      {
        case 2u:
        case 4u:
        case 6u:
        case 0xBu:
        case 0xDu:
        case 0xFu:
        case 0x11u:
        case 0x13u:
        case 0x14u:
        case 0x15u:
        case 0x17u:
        case 0x18u:
        case 0x1Au:
        case 0x1Cu:
        case 0x1Du:
        case 0x1Eu:
        case 0x20u:
        case 0x21u:
        case 0x22u:
        case 0x24u:
        case 0x25u:
        case 0x2Au:
        case 0x2Cu:
        case 0x2Eu:
        case 0x2Fu:
        case 0x31u:
        case 0x33u:
        case 0x35u:
        case 0x37u:
        case 0x39u:
        case 0x3Bu:
        case 0x3Du:
        case 0x41u:
        case 0x43u:
        case 0x45u:
        case 0x47u:
        case 0x49u:
        case 0x4Bu:
        case 0x4Cu:
        case 0x4Du:
        case 0x4Eu:
        case 0x51u:
        case 0x52u:
        case 0x55u:
        case 0x56u:
        case 0x57u:
        case 0x58u:
        case 0x5Au:
        case 0x5Bu:
        case 0x5Du:
        case 0x60u:
        case 0x61u:
        case 0x63u:
        case 0x65u:
        case 0x67u:
        case 0x69u:
        case 0x6Bu:
        case 0x6Du:
        case 0x6Fu:
        case 0x71u:
        case 0x75u:
        case 0x77u:
          goto LABEL_288;
        default:
          goto LABEL_53;
      }
    }
    goto LABEL_288;
  }
  if ( a1 <= 0x101D )
  {
    if ( a1 == 4125 )
      goto LABEL_288;
    if ( a1 <= 0x1003 )
    {
      if ( a1 == 4099 )
        goto LABEL_288;
      if ( a1 <= 0xA3 )
      {
        if ( a1 == 163 || a1 == 149 || a1 == 151 )
          goto LABEL_288;
        v13 = a1 - 153;
        v12 = a1 == 153;
        goto LABEL_18;
      }
      if ( a1 == 166 || a1 == 169 || a1 == 171 || a1 == 173 )
        goto LABEL_288;
      v15 = a1 == 4097;
LABEL_52:
      if ( !v15 )
      {
LABEL_53:
        v18 = 4LL;
        goto LABEL_54;
      }
LABEL_288:
      v52 = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v9);
      EtwTraceUIPISystemError(v52, 0LL, 1);
      v22 = 5;
      goto LABEL_289;
    }
    if ( a1 > 0x100F )
    {
      v16 = a1 == 4115;
      v17 = a1 - 4115;
    }
    else
    {
      if ( a1 == 4111 || a1 == 4101 )
        goto LABEL_288;
      v17 = a1 - 4103;
      v16 = a1 == 4103;
    }
LABEL_48:
    if ( v16 )
      goto LABEL_288;
    v19 = v17 - 2;
    if ( !v19 )
      goto LABEL_288;
    v20 = v19 - 2;
    if ( !v20 )
      goto LABEL_288;
    v15 = v20 == 2;
    goto LABEL_52;
  }
  if ( a1 <= 0x2001 )
  {
    if ( a1 == 8193 )
      goto LABEL_288;
    if ( a1 <= 0x104B )
    {
      if ( a1 == 4171 || a1 == 4127 || a1 == 4135 )
        goto LABEL_288;
      v13 = a1 - 4161;
      v12 = a1 == 4161;
LABEL_18:
      if ( v12 )
        goto LABEL_288;
      v14 = v13 - 2;
      if ( !v14 )
        goto LABEL_288;
      v15 = v14 == 6;
      goto LABEL_52;
    }
    v16 = a1 == 4173;
    v17 = a1 - 4173;
    goto LABEL_48;
  }
  if ( a1 > 0x2015 )
  {
    v16 = a1 == 8215;
    v17 = a1 - 8215;
    goto LABEL_48;
  }
  switch ( a1 )
  {
    case 0x2015u:
      goto LABEL_288;
    case 0x2003u:
      goto LABEL_288;
    case 0x2005u:
      goto LABEL_288;
  }
  v18 = 4LL;
  if ( a1 == 8201 || a1 == 8207 || a1 == 8209 )
    goto LABEL_288;
LABEL_54:
  v21 = Win32AllocPoolWithQuotaZInit(0x228uLL, 0x79747355u);
  v58 = v21;
  if ( !v21 )
  {
    v22 = 8;
LABEL_289:
    v48 = 0;
    UserSetLastError(v22);
    goto LABEL_290;
  }
  PushW32ThreadLock(v21, v67, Win32FreePool);
  if ( a1 <= 0x54 )
  {
    if ( a1 >= 0x53 )
      goto LABEL_277;
    if ( a1 <= 0x2E )
    {
      if ( a1 == 46 )
      {
        v8 = 108;
        goto LABEL_245;
      }
      if ( a1 <= 0x18 )
      {
        if ( a1 == 24 )
        {
LABEL_70:
          if ( (v5 & 0xFFFFFFFFFFFF0000uLL) == 0 )
            goto LABEL_281;
LABEL_277:
          v60 = (void *)v5;
          if ( v5 >= MmUserProbeAddress )
            v5 = MmUserProbeAddress;
          *(_DWORD *)v5 = *(_DWORD *)v5;
          v32 = 1;
          v5 = (ULONG64)v58;
          LODWORD(v6) = v69;
          v8 = 4;
          v31 = v60;
          goto LABEL_283;
        }
        if ( a1 <= 0xE )
        {
          if ( a1 == 14 || a1 == 1 )
            goto LABEL_277;
          if ( a1 != 3 )
          {
            if ( a1 != 4 )
            {
              if ( a1 == 5 || a1 == 10 )
                goto LABEL_277;
              if ( a1 == 13 )
                goto LABEL_70;
              goto LABEL_258;
            }
            goto LABEL_72;
          }
          goto LABEL_74;
        }
        if ( a1 == 16 || a1 == 18 )
          goto LABEL_277;
        if ( a1 == 20 )
        {
          if ( !v5 )
            v5 = -1LL;
          if ( v5 > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_81;
          goto LABEL_85;
        }
        v24 = a1 - 21;
        if ( a1 == 21 )
        {
          if ( (_DWORD)v6 == -1 )
            goto LABEL_281;
          if ( !v5 )
          {
LABEL_81:
            LODWORD(v6) = -1;
            goto LABEL_281;
          }
LABEL_85:
          if ( v5 >= MmUserProbeAddress )
            v5 = MmUserProbeAddress;
          v25 = *(_DWORD *)v5;
          Size_4a = *(_DWORD *)v5;
          v62 = *(_DWORD *)v5;
          v26 = *(const void **)(v5 + 8);
          v63 = v26;
          if ( ((unsigned __int8)v26 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v27 = (unsigned __int16)v25;
          v28 = (ULONG64)v26 + (unsigned __int16)v25 + 2;
          v29 = (_BYTE **)MmUserProbeAddress;
          if ( v28 < MmUserProbeAddress && (unsigned __int16)v25 <= HIWORD(Size_4a) )
          {
            if ( (v25 & 1) != 0 )
              goto LABEL_94;
            if ( v28 > (unsigned __int64)v26 )
            {
LABEL_96:
              v30 = Win32AllocPoolWithQuota(v27 + 2, 0x79747355u);
              v5 = v30;
              if ( !v30 )
                ExRaiseStatus(-1073741801);
              PushW32ThreadLock(v30, v66, Win32FreePool);
              v61 = 1;
              memmove((void *)v5, v26, v27);
              *(_WORD *)(v5 + 2 * (v27 >> 1)) = 0;
              LODWORD(v6) = v69;
              v8 = 0;
              v31 = v60;
              v32 = 0;
              goto LABEL_283;
            }
          }
          if ( (v25 & 1) == 0 )
          {
LABEL_95:
            **v29 = 0;
            goto LABEL_96;
          }
LABEL_94:
          MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v28);
          v29 = (_BYTE **)MmUserProbeAddress;
          goto LABEL_95;
        }
LABEL_105:
        if ( v24 == 1 )
          goto LABEL_277;
        goto LABEL_258;
      }
      if ( a1 <= 0x26 )
      {
        if ( a1 == 38 || a1 == 25 || a1 == 27 )
          goto LABEL_277;
        if ( a1 == 31 )
        {
          v8 = 92;
          goto LABEL_255;
        }
        v24 = a1 - 34;
        if ( a1 != 34 )
          goto LABEL_105;
        v8 = 92;
LABEL_245:
        if ( (v5 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v46 = v5 + v8;
        if ( v46 > MmUserProbeAddress || v46 < v5 )
          *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_250;
      }
      if ( a1 == 41 )
      {
        if ( (((_DWORD)v6 - 500) & 0xFFFFFFFB) != 0 )
          goto LABEL_271;
        v8 = v6;
        goto LABEL_255;
      }
      if ( a1 != 42 )
      {
        if ( a1 == 43 )
        {
          v8 = 20;
          goto LABEL_255;
        }
        if ( a1 == 44 )
        {
          v8 = 20;
          goto LABEL_245;
        }
        if ( a1 != 45 )
          goto LABEL_258;
        v8 = 108;
LABEL_255:
        Addressa = (_DWORD *)v5;
        v60 = (void *)v5;
        v5 = (ULONG64)v58;
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v23);
        v31 = Addressa;
        ProbeForWrite(Addressa, v8, CurrentProcessWow64Process != 0 ? 1 : 4);
        Size_4 = 1;
        *v58 = *Addressa;
LABEL_282:
        v32 = Size_4;
LABEL_283:
        v48 = xxxSystemParametersInfo(a1, v6, (_DWORD *)v5, v70);
        if ( v32 )
          memmove(v31, (const void *)v5, v8);
        goto LABEL_285;
      }
      if ( (((_DWORD)v6 - 500) & 0xFFFFFFFB) != 0 )
        goto LABEL_271;
      v8 = v6;
LABEL_244:
      if ( !v8 )
      {
LABEL_250:
        memmove(v58, (const void *)v5, v8);
        v5 = (ULONG64)v58;
        goto LABEL_281;
      }
      goto LABEL_245;
    }
    if ( a1 <= 0x3C )
    {
      if ( a1 == 60 )
      {
LABEL_74:
        v8 = 12;
        goto LABEL_255;
      }
      if ( a1 > 0x35 )
      {
        switch ( a1 )
        {
          case '6':
            v8 = 28;
            goto LABEL_255;
          case '7':
            v8 = 28;
            goto LABEL_245;
          case '8':
            goto LABEL_277;
          case ':':
            goto LABEL_132;
        }
        if ( a1 != 59 )
          goto LABEL_258;
      }
      else if ( a1 != 53 )
      {
        if ( a1 != 47 )
        {
          if ( a1 != 48 )
          {
            if ( a1 == 50 )
            {
              v8 = 24;
              goto LABEL_255;
            }
            if ( a1 == 51 )
            {
              v8 = 24;
              goto LABEL_245;
            }
            if ( a1 != 52 )
              goto LABEL_258;
LABEL_132:
            v8 = 8;
            goto LABEL_255;
          }
LABEL_135:
          v8 = 16;
          goto LABEL_255;
        }
LABEL_236:
        v8 = 16;
        goto LABEL_245;
      }
LABEL_141:
      v8 = 8;
      goto LABEL_245;
    }
    if ( a1 > 0x44 )
    {
      if ( a1 == 70 )
        goto LABEL_277;
      if ( a1 == 72 )
        goto LABEL_132;
      if ( a1 != 73 )
      {
        if ( a1 == 74 || a1 - 79 <= 1 )
          goto LABEL_277;
        goto LABEL_258;
      }
      goto LABEL_141;
    }
    switch ( a1 )
    {
      case 'D':
        goto LABEL_277;
      case '=':
LABEL_72:
        v8 = 12;
        goto LABEL_245;
      case '@':
        v8 = 56;
        goto LABEL_255;
      case 'A':
        v8 = 56;
        goto LABEL_245;
      case 'B':
        v8 = 16;
        v39 = PsGetCurrentProcessWow64Process(v23);
        ProbeForWrite((volatile void *)v5, 0x10uLL, v39 != 0 ? 1 : 4);
        v31 = (void *)v5;
        v60 = (void *)v5;
        *(_OWORD *)v58 = *(_OWORD *)v5;
        v5 = (ULONG64)v58;
        ProbeForWrite(*((volatile void **)v58 + 1), 0x100uLL, 2u);
LABEL_166:
        Size_4 = 1;
        goto LABEL_282;
    }
    if ( a1 != 67 )
      goto LABEL_258;
    if ( v5 + 24 < v5 || v5 + 24 > MmUserProbeAddress )
      v5 = MmUserProbeAddress;
    v64 = *(_OWORD *)v5;
    v65 = *(_QWORD *)(v5 + 16);
    v33 = v65;
    v34 = v58;
    *(_OWORD *)v58 = v64;
    *((_QWORD *)v58 + 2) = v33;
    v5 = (ULONG64)v58;
    v35 = *((_QWORD *)v58 + 2);
    if ( (v35 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v36 = *((unsigned __int16 *)v58 + 4);
    v37 = v36 + v35 + 2;
    v38 = (_BYTE **)MmUserProbeAddress;
    if ( v37 < MmUserProbeAddress && (unsigned __int16)v36 <= *((_WORD *)v58 + 5) )
    {
      if ( (v36 & 1) != 0 )
        goto LABEL_161;
      if ( v37 > v35 )
        goto LABEL_163;
    }
    if ( (v36 & 1) == 0 )
    {
LABEL_162:
      **v38 = 0;
LABEL_163:
      if ( !*((_WORD *)v34 + 4) )
        *((_QWORD *)v34 + 2) = 0LL;
      goto LABEL_281;
    }
LABEL_161:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v35);
    v38 = (_BYTE **)MmUserProbeAddress;
    v34 = v58;
    goto LABEL_162;
  }
  if ( a1 <= 0x8E )
  {
    if ( a1 != 142 )
    {
      switch ( a1 )
      {
        case 0x59u:
          goto LABEL_132;
        case 0x5Au:
          goto LABEL_141;
        case 0x5Eu:
        case 0x5Fu:
        case 0x62u:
        case 0x64u:
        case 0x66u:
        case 0x68u:
        case 0x6Au:
        case 0x6Cu:
        case 0x6Eu:
        case 0x70u:
        case 0x72u:
        case 0x76u:
        case 0x78u:
        case 0x7Au:
        case 0x7Cu:
        case 0x7Eu:
        case 0x80u:
        case 0x82u:
        case 0x84u:
        case 0x86u:
        case 0x88u:
        case 0x8Au:
        case 0x8Cu:
          goto LABEL_277;
        case 0x73u:
          v31 = (void *)v5;
          v60 = (void *)v5;
          v5 = (ULONG64)v58;
          ProbeForWrite(v31, 2 * v6, 2u);
          if ( (unsigned int)v6 >= 0x104 )
            LODWORD(v6) = 260;
          v8 = 2 * v6;
          goto LABEL_166;
        case 0x74u:
          goto LABEL_74;
        case 0x75u:
          goto LABEL_72;
        default:
          goto LABEL_258;
      }
    }
    goto LABEL_277;
  }
  if ( a1 <= 0x1026 )
  {
    if ( a1 == 4134 )
      goto LABEL_277;
    if ( a1 <= 0x9C )
    {
      if ( a1 != 156 )
      {
        if ( a1 > 0x96 )
        {
          if ( a1 == 151 )
          {
            v8 = 28;
            if ( (_DWORD)v6 != 28 )
              goto LABEL_271;
            goto LABEL_245;
          }
          if ( a1 != 152 )
          {
            if ( a1 != 153 )
            {
              if ( a1 == 154 )
              {
                v8 = 548;
                if ( (_DWORD)v6 == 548 )
                {
                  v44 = PsGetCurrentProcessWow64Process(v23);
                  ProbeForWrite((volatile void *)v5, 0x224uLL, v44 != 0 ? 1 : 4);
                  Address = (volatile void *)v5;
                  v60 = (void *)v5;
                  v45 = v58;
                  do
                  {
                    *v45 = *(_OWORD *)v5;
                    v45[1] = *(_OWORD *)(v5 + 16);
                    v45[2] = *(_OWORD *)(v5 + 32);
                    v45[3] = *(_OWORD *)(v5 + 48);
                    v45[4] = *(_OWORD *)(v5 + 64);
                    v45[5] = *(_OWORD *)(v5 + 80);
                    v45[6] = *(_OWORD *)(v5 + 96);
                    v45 += 8;
                    *(v45 - 1) = *(_OWORD *)(v5 + 112);
                    v5 += 128LL;
                    --v18;
                  }
                  while ( v18 );
                  *v45 = *(_OWORD *)v5;
                  v45[1] = *(_OWORD *)(v5 + 16);
                  *((_DWORD *)v45 + 8) = *(_DWORD *)(v5 + 32);
                  v5 = (ULONG64)v58;
                  Size_4 = 1;
                  goto LABEL_281;
                }
              }
              else
              {
                v8 = 548;
                if ( (_DWORD)v6 == 548 )
                {
                  if ( v5 + 548 < v5 || v5 + 548 > MmUserProbeAddress )
                    v5 = MmUserProbeAddress;
                  v40 = v68;
                  v41 = 4LL;
                  do
                  {
                    *v40 = *(_OWORD *)v5;
                    v40[1] = *(_OWORD *)(v5 + 16);
                    v40[2] = *(_OWORD *)(v5 + 32);
                    v40[3] = *(_OWORD *)(v5 + 48);
                    v40[4] = *(_OWORD *)(v5 + 64);
                    v40[5] = *(_OWORD *)(v5 + 80);
                    v40[6] = *(_OWORD *)(v5 + 96);
                    v40 += 8;
                    *(v40 - 1) = *(_OWORD *)(v5 + 112);
                    v5 += 128LL;
                    --v41;
                  }
                  while ( v41 );
                  *v40 = *(_OWORD *)v5;
                  v40[1] = *(_OWORD *)(v5 + 16);
                  *((_DWORD *)v40 + 8) = *(_DWORD *)(v5 + 32);
                  v42 = v58;
                  v43 = v68;
                  do
                  {
                    *v42 = *v43;
                    v42[1] = v43[1];
                    v42[2] = v43[2];
                    v42[3] = v43[3];
                    v42[4] = v43[4];
                    v42[5] = v43[5];
                    v42[6] = v43[6];
                    v42 += 8;
                    *(v42 - 1) = v43[7];
                    v43 += 8;
                    --v18;
                  }
                  while ( v18 );
                  *v42 = *v43;
                  v42[1] = v43[1];
                  *((_DWORD *)v42 + 8) = *((_DWORD *)v43 + 8);
                  v5 = (ULONG64)v58;
                  if ( v58[6] <= 0x104u )
                    goto LABEL_281;
                }
              }
              goto LABEL_271;
            }
            if ( (_DWORD)v6 != 128 )
            {
LABEL_271:
              UserSetLastError(87);
              v48 = 0;
              goto LABEL_285;
            }
            v8 = 128;
            goto LABEL_245;
          }
          v23 = 128LL;
          if ( (_DWORD)v6 != 128 )
            goto LABEL_271;
          v8 = 128;
        }
        else
        {
          switch ( a1 )
          {
            case 0x96u:
              v8 = 28;
              if ( (_DWORD)v6 != 28 )
                goto LABEL_271;
              break;
            case 0x90u:
              goto LABEL_277;
            case 0x92u:
              v8 = 56;
              if ( (_DWORD)v6 != 56 )
                goto LABEL_271;
              break;
            case 0x93u:
              v8 = 56;
              if ( (_DWORD)v6 != 56 )
                goto LABEL_271;
              goto LABEL_245;
            case 0x94u:
              v8 = 32;
              if ( (_DWORD)v6 != 32 )
                goto LABEL_271;
              break;
            case 0x95u:
              v8 = 32;
              if ( (_DWORD)v6 != 32 )
                goto LABEL_271;
              goto LABEL_245;
            default:
              goto LABEL_258;
          }
        }
        goto LABEL_255;
      }
      if ( (_DWORD)v6 != 16 )
        goto LABEL_271;
      goto LABEL_135;
    }
    if ( a1 > 0xA5 )
    {
      if ( a1 != 167 )
      {
        if ( a1 == 168 || a1 == 170 )
          goto LABEL_277;
        if ( a1 == 172 )
        {
          if ( (_DWORD)v6 != 4 )
            goto LABEL_271;
          v8 = 4;
          goto LABEL_255;
        }
        if ( a1 != 173 )
          goto LABEL_258;
        if ( (_DWORD)v6 != 4 )
          goto LABEL_271;
        v8 = 4;
        goto LABEL_244;
      }
    }
    else if ( a1 != 165 )
    {
      if ( a1 != 157 )
      {
        if ( a1 == 158 || a1 == 160 )
          goto LABEL_277;
        if ( a1 == 162 )
          goto LABEL_135;
        if ( a1 != 163 )
          goto LABEL_258;
      }
      goto LABEL_236;
    }
    v8 = 12;
    if ( (_DWORD)v6 != 12 )
      goto LABEL_271;
    goto LABEL_255;
  }
  if ( a1 == 4135 )
    goto LABEL_281;
  if ( a1 == 8221 )
  {
    if ( v5 > 2 )
      goto LABEL_271;
    goto LABEL_281;
  }
LABEL_258:
  if ( a1 < 0xAE )
    goto LABEL_281;
  if ( a1 - 4096 > 0x53 && a1 - 0x2000 > 0x25
    || (_DWORD)v6 && (*((_DWORD *)gptiCurrent + 156) > 0x400u || a1 != 4159 || (_DWORD)v6 != 1) )
  {
    goto LABEL_271;
  }
  if ( (a1 & 1) == 0 )
    goto LABEL_277;
  if ( a1 != 8193 )
  {
    if ( a1 != 8203 )
    {
      if ( a1 != 8211 || (v5 & 0xFFFFFFFE) == 0 )
        goto LABEL_281;
      goto LABEL_271;
    }
    if ( (v5 & 0xFFFFFFFC) != 0 )
      goto LABEL_271;
LABEL_281:
    v31 = (void *)Address;
    goto LABEL_282;
  }
  if ( (int)IsCanForceForegroundSupported() >= 0 )
  {
    v50 = PsGetCurrentProcessWin32Process(v49);
    if ( (unsigned int)CanForceForeground(v50) )
      goto LABEL_281;
  }
  UserSetLastError(5);
  v48 = 0;
LABEL_285:
  if ( v61 )
    PopAndFreeAlwaysW32ThreadLock(v66);
  PopAndFreeAlwaysW32ThreadLock(v67);
LABEL_290:
  UserSessionSwitchLeaveCrit(v51);
  return v48;
}
