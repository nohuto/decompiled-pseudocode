/*
 * XREFs of NtUserSystemParametersInfo @ 0x1C011D260
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0013920 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolWithQuota @ 0x1C0013990 (Win32AllocPoolWithQuota.c)
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     CheckAccess @ 0x1C002C1C0 (CheckAccess.c)
 *     EtwTraceUIPISystemError @ 0x1C00722D0 (EtwTraceUIPISystemError.c)
 *     xxxSystemParametersInfo @ 0x1C0079CC0 (xxxSystemParametersInfo.c)
 *     SetLastNtError @ 0x1C00BF71C (SetLastNtError.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSystemParametersInfo(unsigned int a1, unsigned int a2, ULONG64 a3, char a4)
{
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
  __int64 v22; // rdx
  __int64 v23; // rcx
  _OWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // eax
  int v28; // eax
  const void *v29; // r15
  size_t v30; // rbx
  ULONG64 v31; // rdx
  _BYTE **v32; // rcx
  __int64 v33; // rax
  void *v34; // r15
  int v35; // r13d
  __int64 v36; // xmm0_8
  _DWORD *v37; // r9
  ULONG64 v38; // rdx
  __int64 v39; // rax
  ULONG64 v40; // r8
  _BYTE **v41; // rcx
  __int64 v42; // rax
  _OWORD *v43; // rdx
  __int64 v44; // rax
  _OWORD *v45; // rax
  __int64 v46; // rax
  _OWORD *v47; // rdx
  ULONG64 v48; // rcx
  __int64 CurrentProcessWow64Process; // rax
  int v50; // edi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  struct tagPROCESSINFO *v56; // rax
  int v58; // [rsp+28h] [rbp-320h]
  _DWORD *Address; // [rsp+30h] [rbp-318h]
  _DWORD *v60; // [rsp+40h] [rbp-308h]
  void *v61; // [rsp+48h] [rbp-300h]
  int v62; // [rsp+50h] [rbp-2F8h]
  _DWORD v63[4]; // [rsp+68h] [rbp-2E0h] BYREF
  __int64 v64; // [rsp+78h] [rbp-2D0h]
  const void *v65; // [rsp+80h] [rbp-2C8h]
  _BYTE v66[24]; // [rsp+88h] [rbp-2C0h] BYREF
  _BYTE v67[40]; // [rsp+A0h] [rbp-2A8h] BYREF
  __int128 v68; // [rsp+C8h] [rbp-280h]
  __int64 v69; // [rsp+D8h] [rbp-270h]
  _BYTE v70[616]; // [rsp+E0h] [rbp-268h] BYREF
  unsigned int v72; // [rsp+368h] [rbp+20h]

  v6 = a2;
  v64 = 0LL;
  v65 = 0LL;
  v8 = 0;
  Address = 0LL;
  memset(v66, 0, sizeof(v66));
  memset(v67, 0, 24);
  v62 = 0;
  v63[0] = 0x2000;
  v63[1] = -1;
  EnterCrit(0, 1);
  v72 = a4 & 3;
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
    if ( CheckAccess((_DWORD *)(CurrentProcessWin32Process + 872), v63) )
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
      v56 = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v9);
      EtwTraceUIPISystemError(v56, 0LL);
      v23 = 5LL;
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
  v60 = v21;
  if ( !v21 )
  {
    v23 = 8LL;
LABEL_289:
    v50 = 0;
    UserSetLastError(v23, v22);
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
          if ( (a3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
            goto LABEL_281;
LABEL_277:
          v61 = (void *)a3;
          if ( a3 >= MmUserProbeAddress )
            a3 = MmUserProbeAddress;
          *(_DWORD *)a3 = *(_DWORD *)a3;
          v35 = 1;
          a3 = (ULONG64)v60;
          LODWORD(v6) = a2;
          v8 = 4;
          v34 = v61;
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
          if ( !a3 )
            a3 = -1LL;
          if ( a3 > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_81;
          goto LABEL_85;
        }
        v27 = a1 - 21;
        if ( a1 == 21 )
        {
          if ( (_DWORD)v6 == -1 )
            goto LABEL_281;
          if ( !a3 )
          {
LABEL_81:
            LODWORD(v6) = -1;
            goto LABEL_281;
          }
LABEL_85:
          if ( a3 >= MmUserProbeAddress )
            a3 = MmUserProbeAddress;
          v28 = *(_DWORD *)a3;
          v58 = *(_DWORD *)a3;
          LODWORD(v64) = *(_DWORD *)a3;
          v29 = *(const void **)(a3 + 8);
          v65 = v29;
          if ( ((unsigned __int8)v29 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v30 = (unsigned __int16)v28;
          v31 = (ULONG64)v29 + (unsigned __int16)v28 + 2;
          v32 = (_BYTE **)MmUserProbeAddress;
          if ( v31 < MmUserProbeAddress && (unsigned __int16)v28 <= HIWORD(v58) )
          {
            if ( (v28 & 1) != 0 )
              goto LABEL_94;
            if ( v31 > (unsigned __int64)v29 )
            {
LABEL_96:
              v33 = Win32AllocPoolWithQuota(v30 + 2, 0x79747355u);
              a3 = v33;
              if ( !v33 )
                ExRaiseStatus(-1073741801);
              PushW32ThreadLock(v33, v66, Win32FreePool);
              v62 = 1;
              memmove((void *)a3, v29, v30);
              *(_WORD *)(a3 + 2 * (v30 >> 1)) = 0;
              LODWORD(v6) = a2;
              v8 = 0;
              v34 = 0LL;
              v35 = 0;
              goto LABEL_283;
            }
          }
          if ( (v28 & 1) == 0 )
          {
LABEL_95:
            **v32 = 0;
            goto LABEL_96;
          }
LABEL_94:
          MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v31, v26);
          v32 = (_BYTE **)MmUserProbeAddress;
          goto LABEL_95;
        }
LABEL_105:
        if ( v27 == 1 )
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
        v27 = a1 - 34;
        if ( a1 != 34 )
          goto LABEL_105;
        v8 = 92;
LABEL_245:
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v48 = a3 + v8;
        if ( v48 > MmUserProbeAddress || v48 < a3 )
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
        if ( a1 != 44 )
        {
          if ( a1 != 45 )
            goto LABEL_258;
          v8 = 108;
          goto LABEL_255;
        }
        v8 = 20;
        goto LABEL_245;
      }
      if ( (((_DWORD)v6 - 500) & 0xFFFFFFFB) != 0 )
        goto LABEL_271;
      v8 = v6;
LABEL_244:
      if ( !v8 )
      {
LABEL_250:
        memmove(v60, (const void *)a3, v8);
        a3 = (ULONG64)v60;
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
LABEL_255:
        Address = (_DWORD *)a3;
        a3 = (ULONG64)v60;
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v25);
        ProbeForWrite(Address, v8, CurrentProcessWow64Process != 0 ? 1 : 4);
        v35 = 1;
        *v60 = *Address;
        goto LABEL_282;
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
        goto LABEL_236;
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
    }
    if ( a1 != 66 )
    {
      if ( a1 != 67 )
        goto LABEL_258;
      if ( a3 + 24 < a3 || a3 + 24 > MmUserProbeAddress )
        a3 = MmUserProbeAddress;
      v68 = *(_OWORD *)a3;
      v69 = *(_QWORD *)(a3 + 16);
      v36 = v69;
      v37 = v60;
      *(_OWORD *)v60 = v68;
      *((_QWORD *)v60 + 2) = v36;
      a3 = (ULONG64)v60;
      v38 = *((_QWORD *)v60 + 2);
      if ( (v38 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v39 = *((unsigned __int16 *)v60 + 4);
      v40 = v39 + v38 + 2;
      v41 = (_BYTE **)MmUserProbeAddress;
      if ( v40 < MmUserProbeAddress && (unsigned __int16)v39 <= *((_WORD *)v60 + 5) )
      {
        if ( (v39 & 1) != 0 )
          goto LABEL_161;
        if ( v40 > v38 )
          goto LABEL_163;
      }
      if ( (v39 & 1) == 0 )
      {
LABEL_162:
        **v41 = 0;
LABEL_163:
        if ( !*((_WORD *)v37 + 4) )
          *((_QWORD *)v37 + 2) = 0LL;
        goto LABEL_281;
      }
LABEL_161:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v38, v40);
      v41 = (_BYTE **)MmUserProbeAddress;
      v37 = v60;
      goto LABEL_162;
    }
    v8 = 16;
    v42 = PsGetCurrentProcessWow64Process(v25);
    ProbeForWrite((volatile void *)a3, 0x10uLL, v42 != 0 ? 1 : 4);
    Address = (_DWORD *)a3;
    *(_OWORD *)v60 = *(_OWORD *)a3;
    a3 = (ULONG64)v60;
    ProbeForWrite(*((volatile void **)v60 + 1), 0x100uLL, 2u);
LABEL_166:
    v35 = 1;
LABEL_282:
    v34 = Address;
LABEL_283:
    v50 = xxxSystemParametersInfo(a1, v6, (_DWORD *)a3, v72);
    if ( v35 )
      memmove(v34, (const void *)a3, v8);
    goto LABEL_285;
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
          Address = (_DWORD *)a3;
          a3 = (ULONG64)v60;
          ProbeForWrite(Address, 2 * v6, 2u);
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
    if ( a1 > 0x9C )
    {
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
LABEL_236:
        v8 = 16;
        goto LABEL_245;
      }
      v8 = 12;
      if ( (_DWORD)v6 != 12 )
        goto LABEL_271;
      goto LABEL_255;
    }
    if ( a1 == 156 )
    {
      if ( (_DWORD)v6 != 16 )
        goto LABEL_271;
      goto LABEL_135;
    }
    if ( a1 <= 0x96 )
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
      goto LABEL_255;
    }
    switch ( a1 )
    {
      case 0x97u:
        v8 = 28;
        if ( (_DWORD)v6 != 28 )
          goto LABEL_271;
        goto LABEL_245;
      case 0x98u:
        v25 = 128LL;
        if ( (_DWORD)v6 != 128 )
          goto LABEL_271;
        v8 = 128;
        goto LABEL_255;
      case 0x99u:
        if ( (_DWORD)v6 != 128 )
          goto LABEL_271;
        v8 = 128;
        goto LABEL_245;
    }
    if ( a1 != 154 )
    {
      v8 = 548;
      if ( (_DWORD)v6 == 548 )
      {
        if ( a3 + 548 < a3 || a3 + 548 > MmUserProbeAddress )
          a3 = MmUserProbeAddress;
        v43 = v70;
        v44 = 4LL;
        do
        {
          *v43 = *(_OWORD *)a3;
          v43[1] = *(_OWORD *)(a3 + 16);
          v43[2] = *(_OWORD *)(a3 + 32);
          v43[3] = *(_OWORD *)(a3 + 48);
          v43[4] = *(_OWORD *)(a3 + 64);
          v43[5] = *(_OWORD *)(a3 + 80);
          v43[6] = *(_OWORD *)(a3 + 96);
          v43 += 8;
          *(v43 - 1) = *(_OWORD *)(a3 + 112);
          a3 += 128LL;
          --v44;
        }
        while ( v44 );
        *v43 = *(_OWORD *)a3;
        v43[1] = *(_OWORD *)(a3 + 16);
        *((_DWORD *)v43 + 8) = *(_DWORD *)(a3 + 32);
        v24 = v60;
        v45 = v70;
        do
        {
          *v24 = *v45;
          v24[1] = v45[1];
          v24[2] = v45[2];
          v24[3] = v45[3];
          v24[4] = v45[4];
          v24[5] = v45[5];
          v24[6] = v45[6];
          v24 += 8;
          *(v24 - 1) = v45[7];
          v45 += 8;
          --v18;
        }
        while ( v18 );
        *v24 = *v45;
        v24[1] = v45[1];
        *((_DWORD *)v24 + 8) = *((_DWORD *)v45 + 8);
        a3 = (ULONG64)v60;
        if ( v60[6] <= 0x104u )
          goto LABEL_281;
      }
      goto LABEL_271;
    }
    v8 = 548;
    if ( (_DWORD)v6 != 548 )
    {
LABEL_271:
      UserSetLastError(87LL, (__int64)v24);
      v50 = 0;
      goto LABEL_285;
    }
    v46 = PsGetCurrentProcessWow64Process(v25);
    ProbeForWrite((volatile void *)a3, 0x224uLL, v46 != 0 ? 1 : 4);
    Address = (_DWORD *)a3;
    v47 = v60;
    do
    {
      *v47 = *(_OWORD *)a3;
      v47[1] = *(_OWORD *)(a3 + 16);
      v47[2] = *(_OWORD *)(a3 + 32);
      v47[3] = *(_OWORD *)(a3 + 48);
      v47[4] = *(_OWORD *)(a3 + 64);
      v47[5] = *(_OWORD *)(a3 + 80);
      v47[6] = *(_OWORD *)(a3 + 96);
      v47 += 8;
      *(v47 - 1) = *(_OWORD *)(a3 + 112);
      a3 += 128LL;
      --v18;
    }
    while ( v18 );
    *v47 = *(_OWORD *)a3;
    v47[1] = *(_OWORD *)(a3 + 16);
    *((_DWORD *)v47 + 8) = *(_DWORD *)(a3 + 32);
    a3 = (ULONG64)v60;
    goto LABEL_166;
  }
  if ( a1 == 4135 )
    goto LABEL_281;
  if ( a1 == 8221 )
  {
    if ( a3 > 2 )
      goto LABEL_271;
    goto LABEL_281;
  }
LABEL_258:
  if ( a1 < 0xAE )
    goto LABEL_281;
  if ( a1 - 4096 > 0x53 && a1 - 0x2000 > 0x29
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
      if ( a1 != 8211 || (a3 & 0xFFFFFFFE) == 0 )
        goto LABEL_281;
      goto LABEL_271;
    }
    if ( (a3 & 0xFFFFFFFC) != 0 )
      goto LABEL_271;
LABEL_281:
    v35 = 0;
    goto LABEL_282;
  }
  if ( (int)IsCanForceForegroundSupported() >= 0 )
  {
    v53 = PsGetCurrentProcessWin32Process(v52);
    if ( (unsigned int)CanForceForeground(v53) )
      goto LABEL_281;
  }
  UserSetLastError(5LL, v51);
  v50 = 0;
LABEL_285:
  if ( v62 )
    PopAndFreeAlwaysW32ThreadLock(v66);
  PopAndFreeAlwaysW32ThreadLock(v67);
LABEL_290:
  UserSessionSwitchLeaveCrit(v55, v54);
  return v50;
}
