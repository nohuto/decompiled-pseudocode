/*
 * XREFs of PipCallDriverAddDeviceQueryRoutine @ 0x14070A3F4
 * Callers:
 *     PnpCallDriverQueryServiceHelper @ 0x1406E8D18 (PnpCallDriverQueryServiceHelper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     PipSetDevNodeState @ 0x140159ED8 (PipSetDevNodeState.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x1401601DC (PnpDiagnosticTraceDeviceOperation.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x140681500 (IopGetDriverNameFromKeyNode.c)
 *     IopCallDriverReinitializationRoutines @ 0x1406C7A90 (IopCallDriverReinitializationRoutines.c)
 *     PipSetDevNodeFlags @ 0x1406E637C (PipSetDevNodeFlags.c)
 *     PipSetDevNodeProblem @ 0x1406F0800 (PipSetDevNodeProblem.c)
 *     IopReferenceDriverObjectByName @ 0x14070A714 (IopReferenceDriverObjectByName.c)
 *     PipOpenServiceEnumKeys @ 0x14070A7D4 (PipOpenServiceEnumKeys.c)
 *     PnpIsLegacyDriver @ 0x14070A940 (PnpIsLegacyDriver.c)
 *     PnpGetServiceStartType @ 0x14073CF30 (PnpGetServiceStartType.c)
 *     PnpCheckPossibleBootStartDriver @ 0x140751F50 (PnpCheckPossibleBootStartDriver.c)
 *     PnpLoadBootFilterDriver @ 0x1409C9994 (PnpLoadBootFilterDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x1409CCF98 (PpInitGetGroupOrderIndex.c)
 */

__int64 __fastcall PipCallDriverAddDeviceQueryRoutine(
        int a1,
        const WCHAR *a2,
        unsigned int a3,
        __int64 *a4,
        int a5,
        char a6)
{
  __int64 result; // rax
  const WCHAR *v7; // rbx
  _DWORD *v9; // rsi
  int v10; // r13d
  char v11; // r12
  HANDLE v12; // r15
  __int16 v13; // dx
  char v14; // r14
  int v15; // ecx
  int v16; // ebx
  int v17; // eax
  int DriverNameFromKeyNode; // eax
  int ServiceStartType; // eax
  __int64 v20; // rdx
  unsigned int v21; // r14d
  __int64 v22; // rax
  int v23; // eax
  SIZE_T v24; // rdx
  _QWORD *v25; // rdi
  _QWORD *PoolWithTag; // rax
  int v27; // eax
  void *v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // rcx
  int v33; // eax
  int v34; // r8d
  int v35; // edx
  int v36; // [rsp+30h] [rbp-40h] BYREF
  int v37; // [rsp+34h] [rbp-3Ch]
  unsigned int v38; // [rsp+38h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-18h] BYREF
  char v42; // [rsp+A0h] [rbp+30h]

  result = 0LL;
  v7 = L"\\Driver\\";
  v36 = 0;
  v37 = 0;
  v9 = 0LL;
  v42 = 0;
  v10 = 0;
  Handle = 0LL;
  v11 = 0;
  v12 = 0LL;
  if ( a1 == 1 && a3 > 2 )
  {
    DestinationString.Length = 0;
    RtlInitUnicodeString(&DestinationString, a2);
    v13 = 92;
    v14 = 1;
    v15 = 0;
    do
    {
      if ( DestinationString.Buffer[v15] != v13 )
      {
        v16 = 0;
        v14 = 0;
        goto LABEL_6;
      }
      ++v7;
      ++v15;
      v13 = *v7;
    }
    while ( *v7 );
    v16 = 0;
LABEL_6:
    UnicodeString.Length = 0;
    if ( v14 )
    {
      RtlInitUnicodeString(&UnicodeString, DestinationString.Buffer);
    }
    else
    {
      if ( !*(_WORD *)(*a4 + 56) )
      {
        *(UNICODE_STRING *)(*a4 + 56) = DestinationString;
        *(_QWORD *)(*a4 + 64) = ExAllocatePoolWithTag(PagedPool, DestinationString.MaximumLength, 0x48706E50u);
        v28 = *(void **)(*a4 + 64);
        if ( !v28 )
        {
          *(_WORD *)(*a4 + 58) = 0;
          *(_WORD *)(*a4 + 56) = 0;
          *(_QWORD *)(*a4 + 64) = 0LL;
          return (unsigned int)-1073741823;
        }
        memmove(v28, DestinationString.Buffer, DestinationString.MaximumLength);
      }
      v17 = PipOpenServiceEnumKeys(&DestinationString, 131097LL, &Handle, 0LL, 0);
      v16 = v17;
      if ( v17 < 0 )
      {
        PipSetDevNodeProblem(*a4, 19, v17);
        v12 = Handle;
        goto LABEL_23;
      }
      v12 = Handle;
      DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &UnicodeString);
      v16 = DriverNameFromKeyNode;
      if ( DriverNameFromKeyNode < 0 )
      {
        PipSetDevNodeProblem(*a4, 19, DriverNameFromKeyNode);
        goto LABEL_23;
      }
      v42 = 1;
      v16 = 0;
    }
    v9 = (_DWORD *)IopReferenceDriverObjectByName(&UnicodeString);
    Handle = v9;
    if ( v9 )
    {
LABEL_36:
      if ( (v9[4] & 0x10) != 0 )
      {
        if ( (unsigned int)PnpIsLegacyDriver(v9) )
        {
          if ( a5 != 3 )
            goto LABEL_22;
          PipSetDevNodeFlags(*a4, 4096);
          PipSetDevNodeState(*a4, 776);
        }
        else if ( (unsigned int)(*(_DWORD *)(*a4 + 300) - 770) <= 1 )
        {
          v25 = (__int64 *)((char *)&a4[a5] + v24);
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(v24 - 15), v24, 0x6E657050u);
          if ( PoolWithTag )
          {
            *PoolWithTag = v9;
            v9 = 0LL;
            PoolWithTag[1] = 0LL;
            while ( *v25 )
              v25 = (_QWORD *)(*v25 + 8LL);
            *v25 = PoolWithTag;
          }
          else
          {
            v16 = -1073741670;
          }
          goto LABEL_22;
        }
      }
      goto LABEL_21;
    }
    if ( !v14 )
    {
      ServiceStartType = PnpGetServiceStartType(DestinationString.Buffer, v12, &v38);
      v21 = v38;
      if ( ServiceStartType < 0 )
        v21 = 4;
      if ( a5 != 3 && !BYTE2(PnpShutdownEvent.Limit) )
      {
        PpInitGetGroupOrderIndex(v12);
        v27 = PnpLoadBootFilterDriver(v12, &UnicodeString);
        v16 = v27;
        if ( v27 < 0 )
        {
          if ( (unsigned int)(v27 + 1073740949) > 1 )
          {
            if ( v21 && !*(_BYTE *)(a4[1] + 4) && !(unsigned __int8)PnpCheckPossibleBootStartDriver(v12, 0LL) )
              *(_BYTE *)(*a4 + 688) = 1;
            v9 = Handle;
            goto LABEL_22;
          }
          v9 = Handle;
        }
        else
        {
          v9 = Handle;
          if ( !Handle )
            goto LABEL_83;
          ObfReferenceObject(Handle);
        }
        goto LABEL_50;
      }
      v22 = a4[1];
      if ( v21 > *(_DWORD *)v22 )
      {
        if ( v21 == 4 && (*(_DWORD *)(*a4 + 396) & 0x6000) == 0 )
          PipSetDevNodeProblem(*a4, 32, 0);
      }
      else
      {
        if ( *(_BYTE *)(v22 + 4) )
        {
          v23 = IopLoadDriver(v12, a6, a5 != 3, &v36);
          v10 = v36;
          v37 = v23;
          v16 = v23;
          v12 = 0LL;
          if ( v23 < 0 )
          {
            if ( v23 == -1073740955 )
            {
              if ( v36 == -1073741670 )
                v16 = -1073741670;
            }
            else
            {
              v29 = (unsigned int)(v23 + 1073740961);
              if ( (unsigned int)v29 > 0x2F || (v30 = 0x800000003001LL, !_bittest64(&v30, v29)) )
              {
                if ( v16 != -1073741218 && v16 != -1073741670 && v16 != -1073740760 )
                  v16 = -1073741204;
              }
            }
          }
          if ( PnPInitialized )
            IopCallDriverReinitializationRoutines(0);
          v9 = (_DWORD *)IopReferenceDriverObjectByName(&UnicodeString);
          if ( v9 )
          {
LABEL_35:
            v16 = 0;
            goto LABEL_36;
          }
          if ( !PnpBootMode
            || (unsigned int)(v16 + 1073740961) <= 0xD && (v31 = 12353, _bittest(&v31, v16 + 1073740961))
            || v16 == -1073740760 )
          {
LABEL_83:
            PnpDiagnosticTraceDeviceOperation(
              &KMPnPEvt_DriverLoad_Fail,
              (unsigned __int16 *)(*a4 + 40),
              v16,
              (__int64)&UnicodeString,
              0);
            v32 = *a4;
            if ( (*(_DWORD *)(*a4 + 396) & 0x6000) == 0 )
            {
              if ( v16 > -1073740955 )
              {
                if ( v16 == -1073740949 )
                {
                  PipSetDevNodeProblem(v32, 48, -1073740949);
                  PipSetDevNodeFlags(*a4, 0x100000);
                  goto LABEL_22;
                }
                if ( v16 == -1073740948 )
                {
                  PipSetDevNodeFlags(v32, 0x100000);
                  v16 = 0;
                  goto LABEL_22;
                }
                v34 = -1073740914;
                if ( v16 == -1073740914 )
                {
                  v35 = 38;
                  goto LABEL_96;
                }
                v33 = -1073740760;
                if ( v16 != -1073740760 )
                  goto LABEL_104;
                v35 = 52;
              }
              else
              {
                if ( v16 == -1073740955 )
                {
                  v34 = v10;
                  v35 = 37;
                  goto LABEL_96;
                }
                v33 = -1073741670;
                if ( v16 == -1073741670 )
                {
                  v35 = 3;
                }
                else
                {
                  v34 = -1073741472;
                  if ( v16 == -1073741472 )
                  {
                    v35 = 40;
                    goto LABEL_96;
                  }
                  if ( v16 == -1073741411 )
                    goto LABEL_91;
                  v33 = -1073741218;
                  if ( v16 != -1073741218 )
                  {
                    if ( v16 == -1073741204 )
                    {
LABEL_91:
                      v34 = v37;
                      v35 = 39;
LABEL_96:
                      PipSetDevNodeProblem(v32, v35, v34);
                      goto LABEL_22;
                    }
LABEL_104:
                    v34 = v16;
                    v35 = 31;
                    goto LABEL_96;
                  }
                  v35 = 41;
                }
              }
              v34 = v33;
              goto LABEL_96;
            }
LABEL_22:
            v11 = v42;
LABEL_23:
            if ( v12 )
              ZwClose(v12);
            if ( v11 )
              RtlFreeAnsiString(&UnicodeString);
            if ( v9 )
              ObfDereferenceObject(v9);
            return (unsigned int)v16;
          }
          v16 = -1073741204;
LABEL_50:
          if ( !v9 )
            goto LABEL_83;
          goto LABEL_35;
        }
        if ( v21 && !(unsigned __int8)PnpCheckPossibleBootStartDriver(v12, v20) )
          *(_BYTE *)(*a4 + 688) = 1;
      }
    }
LABEL_21:
    v16 = -1073741823;
    goto LABEL_22;
  }
  return result;
}
