/*
 * XREFs of NtUserSystemParametersInfo @ 0x1C00F20E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019A40 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     EtwTraceUIPISystemError @ 0x1C003B630 (EtwTraceUIPISystemError.c)
 *     xxxSystemParametersInfo @ 0x1C00688C0 (xxxSystemParametersInfo.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0069D7C (CheckAccessForIntegrityLevelEx.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     SetLastNtError @ 0x1C0165E74 (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // eax
  int v26; // eax
  const void *v27; // r15
  size_t v28; // rbx
  ULONG64 v29; // rdx
  _BYTE **v30; // rcx
  __int64 v31; // rax
  void *v32; // r13
  int v33; // r15d
  __int64 v34; // xmm0_8
  _DWORD *v35; // r9
  ULONG64 v36; // rdx
  __int64 v37; // rax
  ULONG64 v38; // r8
  _BYTE **v39; // rcx
  __int64 v40; // rax
  _OWORD *v41; // rdx
  __int64 v42; // rax
  _OWORD *v43; // rdx
  _OWORD *v44; // rax
  __int64 v45; // rax
  _OWORD *v46; // rdx
  ULONG64 v47; // rcx
  __int64 CurrentProcessWow64Process; // rax
  int v49; // edi
  __int64 v50; // rcx
  __int64 v51; // rax
  struct tagPROCESSINFO *v52; // rax
  int Size_4; // [rsp+24h] [rbp-304h]
  int Size_4a; // [rsp+24h] [rbp-304h]
  volatile void *Address; // [rsp+30h] [rbp-2F8h]
  _DWORD *Addressa; // [rsp+30h] [rbp-2F8h]
  _DWORD *v58; // [rsp+40h] [rbp-2E8h]
  char v59[8]; // [rsp+48h] [rbp-2E0h] BYREF
  void *v60; // [rsp+50h] [rbp-2D8h]
  int v61; // [rsp+58h] [rbp-2D0h]
  int v62; // [rsp+88h] [rbp-2A0h]
  const void *v63; // [rsp+90h] [rbp-298h]
  _BYTE v64[24]; // [rsp+98h] [rbp-290h] BYREF
  _BYTE v65[24]; // [rsp+B0h] [rbp-278h] BYREF
  _BYTE v66[608]; // [rsp+C8h] [rbp-260h] BYREF
  int v67; // [rsp+338h] [rbp+10h]
  unsigned int v68; // [rsp+348h] [rbp+20h]

  v67 = a2;
  v5 = a3;
  v6 = (unsigned int)a2;
  v8 = 0;
  Size_4 = 0;
  Address = 0LL;
  v60 = 0LL;
  v61 = 0;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v59, a2, a3);
  v68 = a4 & 3;
  v9 = gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
  {
    v9 = *(struct tagTHREADINFO **)(*((_QWORD *)gptiCurrent + 53) + 768LL);
    v10 = *((_DWORD *)v9 + 6) & 8;
  }
  else
  {
    v10 = 0;
  }
  if ( !v10 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    if ( CheckAccessForIntegrityLevelEx(*(_QWORD *)(CurrentProcessWin32Process + 880), 0xFFFFFFFF00002000uLL, 0) )
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
      EtwTraceUIPISystemError(v52, 0LL);
      v22 = 5LL;
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
    v22 = 8LL;
LABEL_289:
    v49 = 0;
    UserSetLastError(v22);
    goto LABEL_290;
  }
  PushW32ThreadLock(v21, v65, Win32FreePool);
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
          v33 = 1;
          v5 = (ULONG64)v58;
          LODWORD(v6) = v67;
          v8 = 4;
          v32 = v60;
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
        v25 = a1 - 21;
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
          v26 = *(_DWORD *)v5;
          Size_4a = *(_DWORD *)v5;
          v62 = *(_DWORD *)v5;
          v27 = *(const void **)(v5 + 8);
          v63 = v27;
          if ( ((unsigned __int8)v27 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v28 = (unsigned __int16)v26;
          v29 = (ULONG64)v27 + (unsigned __int16)v26 + 2;
          v30 = (_BYTE **)MmUserProbeAddress;
          if ( v29 < MmUserProbeAddress && (unsigned __int16)v26 <= HIWORD(Size_4a) )
          {
            if ( (v26 & 1) != 0 )
              goto LABEL_94;
            if ( v29 > (unsigned __int64)v27 )
            {
LABEL_96:
              v31 = Win32AllocPoolWithQuota(v28 + 2, 0x79747355u);
              v5 = v31;
              if ( !v31 )
                ExRaiseStatus(-1073741801);
              PushW32ThreadLock(v31, v64, Win32FreePool);
              v61 = 1;
              memmove((void *)v5, v27, v28);
              *(_WORD *)(v5 + 2 * (v28 >> 1)) = 0;
              LODWORD(v6) = v67;
              v8 = 0;
              v32 = v60;
              v33 = 0;
              goto LABEL_283;
            }
          }
          if ( (v26 & 1) == 0 )
          {
LABEL_95:
            **v30 = 0;
            goto LABEL_96;
          }
LABEL_94:
          MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v29, v24);
          v30 = (_BYTE **)MmUserProbeAddress;
          goto LABEL_95;
        }
LABEL_105:
        if ( v25 == 1 )
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
        v25 = a1 - 34;
        if ( a1 != 34 )
          goto LABEL_105;
        v8 = 92;
LABEL_245:
        if ( (v5 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v47 = v5 + v8;
        if ( v47 > MmUserProbeAddress || v47 < v5 )
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
        v32 = Addressa;
        ProbeForWrite(Addressa, v8, CurrentProcessWow64Process != 0 ? 1 : 4);
        Size_4 = 1;
        *v58 = *Addressa;
LABEL_282:
        v33 = Size_4;
LABEL_283:
        v49 = xxxSystemParametersInfo(a1, v6, (_DWORD *)v5, v68);
        if ( v33 )
          memmove(v32, (const void *)v5, v8);
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
        v40 = PsGetCurrentProcessWow64Process(v23);
        ProbeForWrite((volatile void *)v5, 0x10uLL, v40 != 0 ? 1 : 4);
        v32 = (void *)v5;
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
    v34 = *(_QWORD *)(v5 + 16);
    v35 = v58;
    *(_OWORD *)v58 = *(_OWORD *)v5;
    *((_QWORD *)v58 + 2) = v34;
    v5 = (ULONG64)v58;
    v36 = *((_QWORD *)v58 + 2);
    if ( (v36 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v37 = *((unsigned __int16 *)v58 + 4);
    v38 = v37 + v36 + 2;
    v39 = (_BYTE **)MmUserProbeAddress;
    if ( v38 < MmUserProbeAddress && (unsigned __int16)v37 <= *((_WORD *)v58 + 5) )
    {
      if ( (v37 & 1) != 0 )
        goto LABEL_161;
      if ( v38 > v36 )
        goto LABEL_163;
    }
    if ( (v37 & 1) == 0 )
    {
LABEL_162:
      **v39 = 0;
LABEL_163:
      if ( !*((_WORD *)v35 + 4) )
        *((_QWORD *)v35 + 2) = 0LL;
      goto LABEL_281;
    }
LABEL_161:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v36, v38);
    v39 = (_BYTE **)MmUserProbeAddress;
    v35 = v58;
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
          v32 = (void *)v5;
          v60 = (void *)v5;
          v5 = (ULONG64)v58;
          ProbeForWrite(v32, 2 * v6, 2u);
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
                  v45 = PsGetCurrentProcessWow64Process(v23);
                  ProbeForWrite((volatile void *)v5, 0x224uLL, v45 != 0 ? 1 : 4);
                  Address = (volatile void *)v5;
                  v60 = (void *)v5;
                  v46 = v58;
                  do
                  {
                    *v46 = *(_OWORD *)v5;
                    v46[1] = *(_OWORD *)(v5 + 16);
                    v46[2] = *(_OWORD *)(v5 + 32);
                    v46[3] = *(_OWORD *)(v5 + 48);
                    v46[4] = *(_OWORD *)(v5 + 64);
                    v46[5] = *(_OWORD *)(v5 + 80);
                    v46[6] = *(_OWORD *)(v5 + 96);
                    v46 += 8;
                    *(v46 - 1) = *(_OWORD *)(v5 + 112);
                    v5 += 128LL;
                    --v18;
                  }
                  while ( v18 );
                  *v46 = *(_OWORD *)v5;
                  v46[1] = *(_OWORD *)(v5 + 16);
                  *((_DWORD *)v46 + 8) = *(_DWORD *)(v5 + 32);
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
                  v41 = v66;
                  v42 = 4LL;
                  do
                  {
                    *v41 = *(_OWORD *)v5;
                    v41[1] = *(_OWORD *)(v5 + 16);
                    v41[2] = *(_OWORD *)(v5 + 32);
                    v41[3] = *(_OWORD *)(v5 + 48);
                    v41[4] = *(_OWORD *)(v5 + 64);
                    v41[5] = *(_OWORD *)(v5 + 80);
                    v41[6] = *(_OWORD *)(v5 + 96);
                    v41 += 8;
                    *(v41 - 1) = *(_OWORD *)(v5 + 112);
                    v5 += 128LL;
                    --v42;
                  }
                  while ( v42 );
                  *v41 = *(_OWORD *)v5;
                  v41[1] = *(_OWORD *)(v5 + 16);
                  *((_DWORD *)v41 + 8) = *(_DWORD *)(v5 + 32);
                  v43 = v58;
                  v44 = v66;
                  do
                  {
                    *v43 = *v44;
                    v43[1] = v44[1];
                    v43[2] = v44[2];
                    v43[3] = v44[3];
                    v43[4] = v44[4];
                    v43[5] = v44[5];
                    v43[6] = v44[6];
                    v43 += 8;
                    *(v43 - 1) = v44[7];
                    v44 += 8;
                    --v18;
                  }
                  while ( v18 );
                  *v43 = *v44;
                  v43[1] = v44[1];
                  *((_DWORD *)v43 + 8) = *((_DWORD *)v44 + 8);
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
              UserSetLastError(87LL);
              v49 = 0;
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
  if ( a1 - 4096 > 0x53 && a1 - 0x2000 > 0x27
    || (_DWORD)v6 && (*((_DWORD *)gptiCurrent + 158) > 0x400u || a1 != 4159 || (_DWORD)v6 != 1) )
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
    v32 = (void *)Address;
    goto LABEL_282;
  }
  if ( (int)IsCanForceForegroundSupported() >= 0 )
  {
    v51 = PsGetCurrentProcessWin32Process(v50);
    if ( (unsigned int)CanForceForeground(v51) )
      goto LABEL_281;
  }
  UserSetLastError(5LL);
  v49 = 0;
LABEL_285:
  if ( v61 )
    PopAndFreeAlwaysW32ThreadLock(v64);
  PopAndFreeAlwaysW32ThreadLock(v65);
LABEL_290:
  UserSessionSwitchLeaveCrit();
  return v49;
}
