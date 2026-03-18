/*
 * XREFs of RecordCommandTimingHistory @ 0x1C0017EC0
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00018F0 (NVMeCompletionDpcRoutine.c)
 * Callees:
 *     CalculateTimeDurationIn100ns @ 0x1C0002070 (CalculateTimeDurationIn100ns.c)
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 */

void __fastcall RecordCommandTimingHistory(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r10d
  __int64 v5; // rdi
  unsigned int v6; // r8d
  __int64 v7; // rsi
  __int64 v8; // rdx
  _QWORD *SrbExtension; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  int v15; // eax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  int v18; // eax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  int v21; // eax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  int v24; // eax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  int v27; // eax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax

  v3 = *(_DWORD *)(a1 + 3772);
  if ( v3 )
  {
    v5 = *(_QWORD *)(a1 + 3784);
    if ( v5 )
    {
      v6 = *(_DWORD *)(a1 + 3776);
      *(_DWORD *)(a1 + 3776) = v6 + 1 < v3 ? v6 + 1 : 0;
      v7 = 3LL * (v6 < v3 ? v6 : 0);
      SrbExtension = (_QWORD *)GetSrbExtension(a2);
      if ( SrbExtension[520] )
      {
        v10 = 60LL;
        if ( *(_BYTE *)(v8 + 2) != 40 )
          v10 = 16LL;
        *(_DWORD *)(v5 + 8 * v7) = *(_DWORD *)(v10 + v8);
        v11 = SrbExtension[521];
        v12 = SrbExtension[520];
        if ( v11 < v12 )
          *(_DWORD *)(v5 + 8 * v7 + 4) = 195935983;
        else
          *(_DWORD *)(v5 + 8 * v7 + 4) = CalculateTimeDurationIn100ns(v11 - v12, a3);
        v13 = SrbExtension[522];
        if ( v13 )
        {
          v14 = SrbExtension[521];
          if ( v13 < v14 )
            v15 = v14 - v13 > 0x100 ? 0xBADBEEF : 0;
          else
            v15 = CalculateTimeDurationIn100ns(v13 - v14, a3);
          *(_DWORD *)(v5 + 8 * v7 + 8) = v15;
          v16 = SrbExtension[522];
          v17 = SrbExtension[520];
          if ( v16 < v17 )
            v18 = 195935983;
          else
            v18 = CalculateTimeDurationIn100ns(v16 - v17, a3);
          *(_DWORD *)(v5 + 8 * v7 + 12) = v18;
          v19 = SrbExtension[523];
          v20 = SrbExtension[522];
          if ( v19 < v20 )
          {
            v21 = v20 - v19 > 0x100 ? 0xBADBEEF : 0;
LABEL_26:
            *(_DWORD *)(v5 + 8 * v7 + 16) = v21;
            goto LABEL_28;
          }
        }
        else
        {
          v22 = SrbExtension[523];
          v23 = SrbExtension[521];
          if ( v22 < v23 )
            v24 = 195935983;
          else
            v24 = CalculateTimeDurationIn100ns(v22 - v23, a3);
          *(_DWORD *)(v5 + 8 * v7 + 8) = v24;
          v25 = SrbExtension[523];
          v26 = SrbExtension[520];
          if ( v25 < v26 )
            v27 = 195935983;
          else
            v27 = CalculateTimeDurationIn100ns(v25 - v26, a3);
          *(_DWORD *)(v5 + 8 * v7 + 12) = v27;
          v19 = SrbExtension[523];
          v20 = SrbExtension[521];
          if ( v19 < v20 )
          {
            *(_DWORD *)(v5 + 8 * v7 + 16) = 195935983;
LABEL_28:
            v28 = SrbExtension[524];
            v29 = SrbExtension[523];
            if ( v28 < v29 )
              *(_DWORD *)(v5 + 8 * v7 + 20) = 195935983;
            else
              *(_DWORD *)(v5 + 8 * v7 + 20) = CalculateTimeDurationIn100ns(v28 - v29, a3);
            return;
          }
        }
        v21 = CalculateTimeDurationIn100ns(v19 - v20, a3);
        goto LABEL_26;
      }
    }
  }
}
