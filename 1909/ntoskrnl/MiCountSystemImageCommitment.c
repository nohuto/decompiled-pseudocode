/*
 * XREFs of MiCountSystemImageCommitment @ 0x14017ACE4
 * Callers:
 *     MiSessionUpdateImageCharges @ 0x14017AC50 (MiSessionUpdateImageCharges.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005F020 (MI_IS_PHYSICAL_ADDRESS.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSessionVm @ 0x140075FE4 (MiGetSessionVm.c)
 *     MiGetSubsectionDriverProtos @ 0x1400960CC (MiGetSubsectionDriverProtos.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400CA9A0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiGetWsleContents @ 0x1400CAFE0 (MiGetWsleContents.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14017AF34 (MiFreePrivateFixupEntryForSystemImage.c)
 */

unsigned __int64 __fastcall MiCountSystemImageCommitment(__int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rcx
  unsigned __int64 v4; // r14
  __int64 v5; // r13
  unsigned __int64 v6; // rsi
  unsigned __int64 SessionVm; // rax
  int v8; // r12d
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rbp
  LONG *SharedVm; // rbx
  KIRQL v13; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r10
  unsigned int v18; // ebx
  __int64 v19; // rax
  __int64 v21; // r11
  __int64 v22; // rax
  KIRQL v23; // [rsp+60h] [rbp+8h]
  unsigned __int64 v24; // [rsp+68h] [rbp+10h]
  __int64 v25; // [rsp+70h] [rbp+18h] BYREF

  if ( (*(_DWORD *)(a1 + 196) & 0x12) != 0 )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v2 = *(_QWORD *)(a1 + 48);
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v2) )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v3 = *(_QWORD *)(a1 + 112);
  if ( !v3 )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v4 = MiSectionControlArea(v3);
  if ( !*(_QWORD *)(v4 + 144) )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v5 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = v5;
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
  v24 = SessionVm;
  v8 = *(_DWORD *)(v4 + 56) & 0x800;
  v9 = SessionVm;
  v10 = 0LL;
  v11 = MiFreePrivateFixupEntryForSystemImage(v2);
  SharedVm = MiGetSharedVm(v9);
  v13 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v16 = v4 + 128;
  v23 = v13;
  if ( v4 != -128LL )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(v16 + 52) & 0x3FFFFFFF;
      v17 = (unsigned int)(*(_DWORD *)(v16 + 44) - v14);
      if ( (*(_BYTE *)(v16 + 32) & 0x3Eu) >= 8 )
      {
        v6 += 8LL * (unsigned int)(*(_DWORD *)(v16 + 44) - v14);
      }
      else
      {
        if ( !MiGetSubsectionDriverProtos((_QWORD *)v16) )
        {
          v18 = 0;
          if ( v17 )
          {
            while ( 1 )
            {
              if ( v11 )
              {
                v14 = (__int64)(v6 - v5) >> 3;
                if ( _bittest(*(const signed __int32 **)(*(_QWORD *)(v11 + 40) + 8LL), v14) )
                  goto LABEL_29;
              }
              v19 = MI_READ_PTE_LOCK_FREE(v6);
              v25 = v19;
              if ( v19 )
                break;
LABEL_19:
              ++v18;
              v6 += 8LL;
              if ( v18 >= v17 )
                goto LABEL_20;
            }
            if ( !v8 )
            {
              if ( (v19 & 1) == 0 )
              {
                v15 = v10 + 1;
                if ( (v19 & 0x400) != 0 && !MI_PROTO_FORMAT_COMBINED(v19) )
                  v15 = v10;
                v10 = v15;
                goto LABEL_19;
              }
              MI_READ_PTE_LOCK_FREE((unsigned __int64)&v25);
              if ( (MiGetWsleContents(0xFFFFFFFFFLL, (__int64)(v6 << 25) >> 16) & 0xF) != 9
                && (*(_QWORD *)(v21 + 40) & 0x200000000000000LL) != 0
                && *(__int64 *)(v21 + 8) < 0 )
              {
                v22 = v10 + 1;
                if ( (*(_DWORD *)(v21 + 16) & 0x400LL) != 0 )
                  v22 = v10;
                v10 = v22;
                goto LABEL_19;
              }
            }
LABEL_29:
            ++v10;
            goto LABEL_19;
          }
          goto LABEL_20;
        }
        v6 += 8 * v17;
      }
      v10 += v17;
LABEL_20:
      v16 = *(_QWORD *)(v16 + 16);
      if ( !v16 )
      {
        v9 = v24;
        v13 = v23;
        break;
      }
    }
  }
  LOBYTE(v14) = v13;
  MiUnlockWorkingSetExclusive(v9, v14, v15, v16);
  return v10;
}
