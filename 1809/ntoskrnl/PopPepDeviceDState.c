/*
 * XREFs of PopPepDeviceDState @ 0x140172084
 * Callers:
 *     PoFxReportDevicePoweredOn @ 0x140170D80 (PoFxReportDevicePoweredOn.c)
 *     PopRequestCompletion @ 0x140170F50 (PopRequestCompletion.c)
 *     PopIrpWorker @ 0x140171840 (PopIrpWorker.c)
 * Callees:
 *     PopFxUpdateDeviceAccountingEnhanced @ 0x140158DE8 (PopFxUpdateDeviceAccountingEnhanced.c)
 *     PopPepUpdateConstraints @ 0x1401722B4 (PopPepUpdateConstraints.c)
 *     PopFxUpdateComponentAccountingEnhanced @ 0x140172524 (PopFxUpdateComponentAccountingEnhanced.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1401725A8 (PopPepUpdateIdleStateRefCount.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x1402DA350 (PopFxUpdateComponentPerfStateNominalChange.c)
 */

void __fastcall PopPepDeviceDState(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v4; // r15
  unsigned int v5; // ebp
  char v6; // bl
  char v7; // r12
  unsigned int v9; // r13d
  __int64 v10; // rcx
  unsigned int v11; // edi
  int v12; // eax
  bool v13; // cl
  __int64 v14; // rbx
  unsigned int v15; // r13d
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-48h] BYREF
  int v22; // [rsp+28h] [rbp-40h]
  char v23; // [rsp+2Ch] [rbp-3Ch]
  char v24; // [rsp+2Dh] [rbp-3Bh]
  unsigned int v25; // [rsp+70h] [rbp+8h]
  unsigned int v26; // [rsp+80h] [rbp+18h]

  v4 = a2;
  v5 = 0;
  v6 = a4;
  v7 = a3;
  if ( (_BYTE)a3 )
  {
    if ( a2 == 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 132), 0xFFFFFFFF) == 1 )
    {
      LOBYTE(a3) = 1;
      PopPepUpdateConstraints(a1, 4LL, a3);
    }
  }
  else if ( a2 > 1 )
  {
    _InterlockedExchange((volatile __int32 *)(a1 + 132), 2);
    PopPepUpdateConstraints(a1, 4LL, 0LL);
    if ( v6 )
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 132));
  }
  if ( *(_BYTE *)(a1 + 124) || *(_BYTE *)(a1 + 384) )
  {
    v9 = 0;
    if ( (_DWORD)v4 != 4 )
      v9 = *(_DWORD *)(a1 + 4 * v4 + 140);
    v10 = *(int *)(a1 + 168);
    v26 = v9;
    v11 = 0;
    if ( (_DWORD)v10 != 4 )
      v11 = *(_DWORD *)(a1 + 4 * v10 + 140);
    v25 = v11;
    if ( !v7 && (_DWORD)v10 != (_DWORD)v4 )
    {
      if ( (_DWORD)v4 == 1 )
      {
        v15 = 0;
        if ( *(_DWORD *)(a1 + 180) )
        {
          do
          {
            v16 = 200LL * v15;
            v17 = *(unsigned int *)(v16 + a1 + 360);
            PopPepUpdateIdleStateRefCount(0LL, *(unsigned int *)(*(_QWORD *)(v16 + a1 + 376) + 24 * v17 + 16), 1LL);
            PopFxUpdateComponentAccountingEnhanced(
              *(_QWORD *)(a1 + 32),
              *(unsigned int *)(v16 + a1 + 192),
              (unsigned int)v17,
              0LL);
            ++v15;
          }
          while ( v15 < *(_DWORD *)(a1 + 180) );
          v11 = v25;
          v6 = a4;
        }
        v9 = v26;
      }
      PopPepUpdateIdleStateRefCount(v11, v9, 1LL);
      PopFxUpdateDeviceAccountingEnhanced(*(_QWORD *)(a1 + 32), v4, 0);
    }
    if ( *(_BYTE *)(a1 + 124) )
    {
      v18 = *(_QWORD *)(a1 + 32);
      v22 = v4;
      v23 = v7;
      v24 = v6;
      v21 = *(_QWORD *)(v18 + 72);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v18 + 64) + 96LL))(5LL, &v21);
    }
    if ( v7 )
    {
      v12 = *(_DWORD *)(a1 + 168);
      if ( v12 != (_DWORD)v4 )
      {
        v13 = 0;
        if ( PopFxPerfQueryOnDevicePowerChanges )
        {
          if ( *(_BYTE *)(a1 + 177) )
            goto LABEL_36;
          if ( *(_BYTE *)(a1 + 176) )
            v13 = (_DWORD)v4 == 1;
          if ( v13 )
          {
LABEL_36:
            v19 = 0;
            if ( *(_DWORD *)(a1 + 180) )
            {
              do
              {
                v20 = 200LL * v19;
                if ( *(_BYTE *)(v20 + a1 + 368) )
                {
                  LOBYTE(a3) = 1;
                  PopFxUpdateComponentPerfStateNominalChange(
                    *(_QWORD *)(a1 + 32),
                    *(unsigned int *)(v20 + a1 + 192),
                    a3,
                    (unsigned int)v4);
                }
                ++v19;
              }
              while ( v19 < *(_DWORD *)(a1 + 180) );
              v12 = *(_DWORD *)(a1 + 168);
            }
          }
        }
        if ( v12 == 1 && *(_DWORD *)(a1 + 180) )
        {
          do
          {
            v14 = 200LL * v5;
            PopPepUpdateIdleStateRefCount(
              *(unsigned int *)(*(_QWORD *)(v14 + a1 + 376) + 24LL * *(unsigned int *)(v14 + a1 + 360) + 16),
              0LL,
              0LL);
            PopFxUpdateComponentAccountingEnhanced(
              *(_QWORD *)(a1 + 32),
              *(unsigned int *)(v14 + a1 + 192),
              (unsigned int)(*(_DWORD *)(v14 + a1 + 372) - 1),
              1LL);
            ++v5;
          }
          while ( v5 < *(_DWORD *)(a1 + 180) );
        }
        PopPepUpdateIdleStateRefCount(v11, v9, 0LL);
        PopFxUpdateDeviceAccountingEnhanced(*(_QWORD *)(a1 + 32), v4, 1);
        *(_DWORD *)(a1 + 168) = v4;
      }
    }
  }
}
