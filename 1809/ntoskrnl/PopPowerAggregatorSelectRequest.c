/*
 * XREFs of PopPowerAggregatorSelectRequest @ 0x140876F34
 * Callers:
 *     PopPowerAggregatorWorker @ 0x140877170 (PopPowerAggregatorWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopDiagTracePowerAggregatorInvalidRequestIndex @ 0x140874968 (PopDiagTracePowerAggregatorInvalidRequestIndex.c)
 *     PopDiagTracePowerAggregatorRequest @ 0x140874AE0 (PopDiagTracePowerAggregatorRequest.c)
 *     PopPowerAggregatorGetPromotionReason @ 0x140876E78 (PopPowerAggregatorGetPromotionReason.c)
 */

void __fastcall PopPowerAggregatorSelectRequest(int *a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rsi
  int *v4; // r14
  unsigned int v5; // r11d
  unsigned int v6; // r10d
  int v7; // edi
  __int64 v8; // rbp
  char *v9; // r12
  char *v10; // r13
  int PromotionReason; // eax
  int v12; // r10d
  unsigned int v13; // ebx
  _DWORD v16[16]; // [rsp+30h] [rbp-88h] BYREF

  v2 = dword_140411904;
  v3 = a2;
  v4 = a1;
  if ( (unsigned int)dword_140411904 < 0x10 )
  {
    memset(v16, 0, sizeof(v16));
    v5 = dword_140411908;
    LOBYTE(v6) = 1;
    v7 = dword_140411904;
    if ( (unsigned int)dword_140411908 > 1 )
    {
      do
      {
        v8 = (v2 + (_BYTE)v6) & 0xF;
        v9 = &PopPowerAggregatorRequestQueue[12 * v7];
        v10 = &PopPowerAggregatorRequestQueue[12 * v8];
        PromotionReason = PopPowerAggregatorGetPromotionReason((int *)v9 + 3, (int *)v10 + 3);
        if ( PromotionReason )
        {
          v16[v7] = PromotionReason;
          v7 = v8;
        }
        else
        {
          v16[v8] = PopPowerAggregatorGetPromotionReason((int *)v10 + 3, (int *)v9 + 3);
        }
        v6 = v12 + 1;
      }
      while ( v6 < v5 );
      v3 = a2;
      v4 = a1;
    }
    v13 = 0;
    if ( v5 )
    {
      do
      {
        PopDiagTracePowerAggregatorRequest(
          *v4,
          v13,
          (__int64)&PopPowerAggregatorRequestQueue[12 * (((_BYTE)v13 + (_BYTE)dword_140411904) & 0xF) + 12],
          v16[((_BYTE)v13 + (_BYTE)dword_140411904) & 0xF]);
        ++v13;
      }
      while ( v13 < dword_140411908 );
    }
    *(_QWORD *)v3 = *(_QWORD *)&PopPowerAggregatorRequestQueue[12 * v7 + 12];
    *(_DWORD *)(v3 + 8) = *(_DWORD *)&PopPowerAggregatorRequestQueue[12 * v7 + 20];
    dword_140411904 = 0;
    dword_140411908 = 0;
    memset(&unk_14041190C, 0, 0xC0uLL);
  }
  else
  {
    PopDiagTracePowerAggregatorInvalidRequestIndex(dword_140411904, dword_140411908);
  }
}
