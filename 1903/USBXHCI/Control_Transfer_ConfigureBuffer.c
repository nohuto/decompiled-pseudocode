/*
 * XREFs of Control_Transfer_ConfigureBuffer @ 0x1C002B6FC
 * Callers:
 *     Control_MapTransfer @ 0x1C002A448 (Control_MapTransfer.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall Control_Transfer_ConfigureBuffer(_QWORD *a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // rax
  PMDL Mdl; // rax
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned __int16 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  PVOID v15; // rax
  __int64 Priority; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+30h] [rbp-18h]

  v1 = a1[43];
  v2 = 0;
  v4 = *(_DWORD *)(v1 + 64);
  v5 = *(_QWORD *)(v1 + 48);
  if ( v4 > 0 )
  {
    if ( v4 <= 2 )
    {
      v13 = *(_QWORD *)(v5 + 40);
      if ( v13 )
      {
        *(_QWORD *)(v1 + 80) = v13;
        return v2;
      }
      v14 = *(_QWORD *)(v5 + 48);
      if ( (*(_BYTE *)(v14 + 10) & 5) != 0 )
        v15 = *(PVOID *)(v14 + 24);
      else
        v15 = MmMapLockedPagesSpecifyCache((PMDL)v14, 0, MmCached, 0LL, 0, WPP_MAIN_CB.AlignmentRequirement | 0x10);
      *(_QWORD *)(v1 + 80) = v15;
      if ( !v15 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = 26;
          v12 = a1[7];
          v18 = *(_DWORD *)(v12 + 144);
          LODWORD(Priority) = *(unsigned __int8 *)(a1[6] + 135LL);
          goto LABEL_24;
        }
        return (unsigned int)-1073741670;
      }
    }
    else if ( v4 == 3 )
    {
      v6 = *(_QWORD *)(v5 + 48);
      if ( v6 )
      {
        *(_QWORD *)(v1 + 72) = v6;
        return v2;
      }
      Mdl = IoAllocateMdl(*(PVOID *)(v5 + 40), *(_DWORD *)(v1 + 104), 0, 0, 0LL);
      *(_QWORD *)(v1 + 72) = Mdl;
      if ( Mdl )
      {
LABEL_13:
        MmBuildMdlForNonPagedPool(*(PMDL *)(v1 + 72));
        return v2;
      }
      if ( (*(_DWORD *)(v5 + 32) & 0x10) != 0 )
      {
        v8 = a1[15];
        if ( v8 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(a1[7] + 80LL),
              5u,
              0xEu,
              0x1Bu,
              (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
              *(unsigned __int8 *)(a1[6] + 135LL),
              *(_DWORD *)(a1[7] + 144LL));
            v8 = a1[15];
          }
          v9 = *(unsigned int *)(v1 + 104);
          *(_QWORD *)(v1 + 72) = v8;
          v10 = *(_QWORD *)(v5 + 40);
          *(_QWORD *)v8 = 0LL;
          *(_WORD *)(v8 + 10) = 0;
          *(_DWORD *)(v8 + 40) = v9;
          *(_QWORD *)(v8 + 32) = v10 & 0xFFFFFFFFFFFFF000uLL;
          *(_WORD *)(v8 + 8) = 8 * ((((unsigned __int64)(v10 & 0xFFF) + v9 + 4095) >> 12) + 6);
          *(_DWORD *)(v8 + 44) = v10 & 0xFFF;
          goto LABEL_13;
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = 28;
        v12 = a1[7];
        v18 = *(_DWORD *)(v12 + 144);
        LODWORD(Priority) = *(unsigned __int8 *)(a1[6] + 135LL);
LABEL_24:
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v12 + 80),
          2u,
          0xEu,
          v11,
          (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
          Priority,
          v18);
        return (unsigned int)-1073741670;
      }
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
