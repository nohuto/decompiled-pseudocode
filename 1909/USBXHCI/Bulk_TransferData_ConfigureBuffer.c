/*
 * XREFs of Bulk_TransferData_ConfigureBuffer @ 0x1C00376F4
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C0036038 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 */

__int64 __fastcall Bulk_TransferData_ConfigureBuffer(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  unsigned __int16 v4; // ax
  int v5; // eax
  __int64 v6; // rbp
  __int64 v7; // rax
  PMDL Mdl; // rax
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int16 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  PVOID v16; // rax
  __int64 Priority; // [rsp+28h] [rbp-20h]
  int v19; // [rsp+30h] [rbp-18h]
  int v20; // [rsp+38h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = 0;
  v4 = *(_WORD *)(v1 + 2);
  if ( v4 < 0x39u || v4 > 0x3Au )
  {
    v5 = *(_DWORD *)(a1 + 76);
    v6 = *(_QWORD *)(a1 + 56);
    if ( v5 > 0 )
    {
      if ( v5 <= 2 )
      {
        v14 = *(_QWORD *)(v1 + 40);
        if ( v14 )
        {
          *(_QWORD *)(a1 + 88) = v14;
          return v2;
        }
        v15 = *(_QWORD *)(v1 + 48);
        if ( (*(_BYTE *)(v15 + 10) & 5) != 0 )
          v16 = *(PVOID *)(v15 + 24);
        else
          v16 = MmMapLockedPagesSpecifyCache((PMDL)v15, 0, MmCached, 0LL, 0, WPP_MAIN_CB.AlignmentRequirement | 0x10);
        *(_QWORD *)(a1 + 88) = v16;
        if ( !v16 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v12 = 38;
            v13 = *(_QWORD *)(v6 + 56);
            v20 = *(_DWORD *)(v6 + 64);
            v19 = *(_DWORD *)(v13 + 144);
            LODWORD(Priority) = *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL);
            goto LABEL_26;
          }
          return (unsigned int)-1073741670;
        }
      }
      else if ( v5 == 3 )
      {
        v7 = *(_QWORD *)(v1 + 48);
        if ( v7 )
        {
          *(_QWORD *)(a1 + 80) = v7;
          return v2;
        }
        Mdl = IoAllocateMdl(*(PVOID *)(v1 + 40), *(_DWORD *)(a1 + 104), 0, 0, 0LL);
        *(_QWORD *)(a1 + 80) = Mdl;
        if ( Mdl )
        {
LABEL_15:
          MmBuildMdlForNonPagedPool(*(PMDL *)(a1 + 80));
          return v2;
        }
        if ( (*(_DWORD *)(v1 + 32) & 0x10) != 0 )
        {
          v9 = *(_QWORD *)(v6 + 120);
          if ( v9 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_ddL(
                *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
                5u,
                0xEu,
                0x27u,
                (__int64)&WPP_7d510b11cf7730484f23e28c4fa6ef2f_Traceguids,
                *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL),
                *(_DWORD *)(*(_QWORD *)(v6 + 56) + 144LL),
                *(_DWORD *)(v6 + 64));
              v9 = *(_QWORD *)(v6 + 120);
            }
            v10 = *(unsigned int *)(a1 + 104);
            *(_QWORD *)(a1 + 80) = v9;
            v11 = *(_QWORD *)(v1 + 40);
            *(_QWORD *)v9 = 0LL;
            *(_WORD *)(v9 + 10) = 0;
            *(_DWORD *)(v9 + 40) = v10;
            *(_QWORD *)(v9 + 32) = v11 & 0xFFFFFFFFFFFFF000uLL;
            *(_WORD *)(v9 + 8) = 8 * ((((unsigned __int64)(v11 & 0xFFF) + v10 + 4095) >> 12) + 6);
            *(_DWORD *)(v9 + 44) = v11 & 0xFFF;
            goto LABEL_15;
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v12 = 40;
          v13 = *(_QWORD *)(v6 + 56);
          v20 = *(_DWORD *)(v6 + 64);
          v19 = *(_DWORD *)(v13 + 144);
          LODWORD(Priority) = *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL);
LABEL_26:
          WPP_RECORDER_SF_ddL(
            *(_QWORD *)(v13 + 80),
            2u,
            0xEu,
            v12,
            (__int64)&WPP_7d510b11cf7730484f23e28c4fa6ef2f_Traceguids,
            Priority,
            v19,
            v20);
          return (unsigned int)-1073741670;
        }
        return (unsigned int)-1073741670;
      }
    }
  }
  return v2;
}
