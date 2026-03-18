/*
 * XREFs of ProcessorpFindAffinitizedIdtEntries @ 0x1C00994A0
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C0099260 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqDss @ 0x1C001D760 (WPP_RECORDER_SF_DDqDss.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qDss @ 0x1C006C0E4 (WPP_RECORDER_SF_qDss.c)
 *     IcIsInterruptTypeSecondary @ 0x1C009983C (IcIsInterruptTypeSecondary.c)
 *     IcCheckIrqConflict @ 0x1C009C040 (IcCheckIrqConflict.c)
 */

NTSTATUS __fastcall ProcessorpFindAffinitizedIdtEntries(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        unsigned int *a9)
{
  char v9; // r15
  char IsInterruptTypeSecondary; // al
  int v11; // r8d
  unsigned __int8 v12; // dl
  int v13; // eax
  _DWORD *v14; // r9
  int *v15; // rax
  int v16; // r12d
  unsigned int v17; // ecx
  __int64 *v18; // r14
  int v19; // esi
  int v20; // r13d
  __int64 v21; // rdi
  __int64 v22; // r14
  unsigned __int8 v23; // r15
  unsigned int i; // edi
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v26; // rcx
  BOOLEAN (__stdcall *Callback)(PVOID, struct _RTL_RANGE *); // r9
  NTSTATUS result; // eax
  char v29; // al
  unsigned int v30; // r10d
  char v31; // cl
  char v32; // cl
  const char *v33; // rax
  const char *v34; // rdx
  unsigned int v35; // r14d
  const char *v36; // rax
  const char *v37; // rdx
  int AttributeAvailableMask; // [rsp+20h] [rbp-E0h]
  unsigned __int8 Available; // [rsp+60h] [rbp-A0h] BYREF
  char v40; // [rsp+61h] [rbp-9Fh]
  char v41[2]; // [rsp+62h] [rbp-9Eh] BYREF
  int v42; // [rsp+64h] [rbp-9Ch]
  struct _PROCESSOR_NUMBER v43; // [rsp+68h] [rbp-98h]
  int v44; // [rsp+6Ch] [rbp-94h]
  __int64 v45; // [rsp+70h] [rbp-90h]
  unsigned int v46; // [rsp+78h] [rbp-88h]
  unsigned int v47; // [rsp+7Ch] [rbp-84h]
  unsigned int v48; // [rsp+80h] [rbp-80h]
  __int64 Context; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+90h] [rbp-70h]
  int v51; // [rsp+98h] [rbp-68h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+A0h] [rbp-60h] BYREF
  int v53; // [rsp+A8h] [rbp-58h]
  _DWORD *v54; // [rsp+B0h] [rbp-50h]
  __int64 v55; // [rsp+B8h] [rbp-48h]
  __int64 v56; // [rsp+C0h] [rbp-40h]
  unsigned int *v57; // [rsp+C8h] [rbp-38h]
  _DWORD v58[4]; // [rsp+D0h] [rbp-30h] BYREF

  v9 = a5;
  v57 = a9;
  Context = 0LL;
  v50 = 0LL;
  v40 = a4;
  v51 = -a5;
  v45 = a2;
  v56 = a1;
  v55 = 0LL;
  v43 = 0;
  if ( a5 != (a5 & -a5) )
    return -1073741581;
  if ( a5 > 0x10 )
    return -1073741581;
  IsInterruptTypeSecondary = IcIsInterruptTypeSecondary(a6);
  if ( IsInterruptTypeSecondary )
  {
    if ( a5 > 1 )
      return -1073741581;
  }
  v11 = 0;
  v42 = 0;
  if ( IsInterruptTypeSecondary )
  {
    v11 = 256;
    v42 = 256;
  }
  v58[0] = 2;
  v48 = 3;
  v58[2] = 3;
  v58[1] = 1;
  if ( IsInterruptTypeSecondary )
  {
    v58[3] = 0;
    v48 = 4;
  }
  v12 = 0;
  Available = 0;
  v13 = 0;
  v44 = 0;
  while ( 2 )
  {
    v53 = v13;
    v14 = ProcessorIdtRowPriority;
    v15 = v58;
    v47 = 0;
    v54 = v58;
    do
    {
      v16 = *v15;
      LOBYTE(v17) = 0;
      v18 = (__int64 *)v45;
      v46 = 0;
      while ( 2 )
      {
        v19 = 16;
        v20 = (unsigned __int8)v51 & (unsigned __int8)(ProcessorVectorColumnBias + v17 + v9 - 1) & 0xF;
        do
        {
          v21 = ((_BYTE)v19 + (_BYTE)ProcessorVectorRowBias - 1) & 0xF;
          if ( ProcessorIdtRowPriority[v21] == v16 )
          {
            v22 = *v18;
            v23 = 0;
            for ( i = v11 + (v20 | (16 * v21)); v22; v22 &= ~(1LL << v29) )
            {
              if ( _bittest64(&v22, v23) )
              {
                *(_WORD *)&v43.Number = v23;
                v43.Group = *(_WORD *)(v45 + 8);
                ProcNumber = v43;
                ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
                if ( ProcessorIndexFromNumber == -1 )
                  return -1073741811;
                if ( ProcessorIndexFromNumber >= ProcessorInstanceCount )
                  return -1073741811;
                v26 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
                if ( !v26 )
                  return -1073741811;
                if ( v44 == 1 )
                {
                  Callback = (BOOLEAN (__stdcall *)(PVOID, struct _RTL_RANGE *))ProcessorpRangeConflictCallback;
                  Context = v56;
                  LODWORD(v50) = a6;
                  WORD2(v50) = (a7 & 1) != 0;
                  BYTE6(v50) = v40;
                }
                else
                {
                  Callback = 0LL;
                  Context = 0LL;
                  v50 = 0LL;
                }
                if ( a8 == 1 )
                  ++v26;
                result = RtlIsRangeAvailable(v26, i, i + a5 - 1LL, 0, 0, &Context, Callback, &Available);
                if ( result < 0 )
                  return result;
                v12 = Available;
                if ( !Available )
                  goto LABEL_27;
              }
              v29 = v23++;
            }
            if ( v12 )
            {
              v30 = a6;
              v31 = a5;
              v41[0] = 0;
              if ( a6 >= 0xFFF00000 || (v35 = i, i >= i + a5) )
              {
LABEL_31:
                if ( v57 )
                  *v57 = i;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v32 = v31 - 1;
                  v33 = "edge";
                  if ( (a7 & 1) == 0 )
                    v33 = "level";
                  v34 = "share";
                  if ( !v40 )
                    v34 = "noshare";
                  WPP_RECORDER_SF_DDqDss(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    (__int64)v34,
                    (__int64)"noshare",
                    (__int64)v14,
                    AttributeAvailableMask,
                    i,
                    i + v32,
                    *(_QWORD *)v45,
                    v30,
                    v34,
                    v33);
                }
                return v55;
              }
              while ( (int)IcCheckIrqConflict(v30, v35, a7, v41) >= 0 )
              {
                v30 = a6;
                if ( ++v35 >= i + a5 )
                {
                  if ( !v41[0] )
                  {
                    v31 = a5;
                    goto LABEL_31;
                  }
                  break;
                }
              }
              v12 = Available;
            }
LABEL_27:
            v18 = (__int64 *)v45;
          }
          v11 = v42;
          v14 = ProcessorIdtRowPriority;
          --v19;
        }
        while ( v19 );
        v14 = ProcessorIdtRowPriority;
        v9 = a5;
        v17 = a5 + v46;
        v46 = v17;
        if ( v17 < 0x10 )
          continue;
        break;
      }
      v14 = ProcessorIdtRowPriority;
      v15 = v54 + 1;
      ++v47;
      ++v54;
    }
    while ( v47 < v48 );
    v13 = ++v44;
    if ( v53 < 1 )
      continue;
    break;
  }
  LODWORD(v55) = -1073741275;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v36 = "edge";
    if ( (a7 & 1) == 0 )
      v36 = "level";
    v37 = "share";
    if ( !v40 )
      v37 = "noshare";
    WPP_RECORDER_SF_qDss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v37,
      (__int64)"noshare",
      (__int64)ProcessorIdtRowPriority,
      AttributeAvailableMask,
      *v18,
      a6,
      (__int64)v37,
      (__int64)v36);
  }
  return v55;
}
