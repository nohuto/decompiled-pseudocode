/*
 * XREFs of MiUpdateCfgSystemWideBitmapWorker @ 0x1405F3130
 * Callers:
 *     MiUpdateCfgSystemWideBitmap @ 0x14064F764 (MiUpdateCfgSystemWideBitmap.c)
 * Callees:
 *     RtlClearAllBits @ 0x14000FA60 (RtlClearAllBits.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiSectionControlArea @ 0x140075E70 (MiSectionControlArea.c)
 *     RtlSetBits @ 0x140076D80 (RtlSetBits.c)
 *     MiLocatePagefileSubsection @ 0x140119D28 (MiLocatePagefileSubsection.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     MmUnmapViewInSystemSpace @ 0x1405DF390 (MmUnmapViewInSystemSpace.c)
 *     MiMapViewInSystemSpace @ 0x1405DF3F4 (MiMapViewInSystemSpace.c)
 *     MiChargeSegmentCommit @ 0x14061E0D0 (MiChargeSegmentCommit.c)
 *     MiEliminateZeroPages @ 0x14066BED0 (MiEliminateZeroPages.c)
 *     RtlEnumRvaListFirst @ 0x1406AB164 (RtlEnumRvaListFirst.c)
 */

__int64 __fastcall MiUpdateCfgSystemWideBitmapWorker(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // r13d
  unsigned int v5; // r14d
  ULONG_PTR v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 result; // rax
  char *v11; // r12
  unsigned __int64 v12; // rax
  unsigned int *v13; // rax
  __int64 v14; // r15
  signed __int32 *v15; // rdi
  unsigned int v16; // r10d
  int v17; // r8d
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned __int8 *v20; // r9
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // r11d
  int v26; // r9d
  __int64 v27; // rdi
  __int64 v28; // rax
  int v29; // ecx
  char *AnyMultiplexedVm; // rax
  int *v31; // rax
  unsigned __int64 v32; // [rsp+40h] [rbp-31h] BYREF
  void *v33; // [rsp+48h] [rbp-29h] BYREF
  PVOID MappedBase; // [rsp+50h] [rbp-21h] BYREF
  struct _RTL_BITMAP BitMapHeader; // [rsp+58h] [rbp-19h] BYREF
  unsigned int BugCheckParameter3; // [rsp+68h] [rbp-9h] BYREF
  int BugCheckParameter3_4; // [rsp+6Ch] [rbp-5h]
  unsigned int v38; // [rsp+70h] [rbp-1h]

  v4 = 0;
  v5 = a4;
  if ( !a2 || (v8 = *(_QWORD *)(a2 + 8)) == 0 )
    v8 = 0LL;
  v9 = a3 >> 3;
  v32 = a3 >> 3;
  v33 = (void *)(a4 >> 3);
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = (a4 >> 15) + ((((a3 >> 3) & 0xFFF) + 4095 + ((a4 >> 3) & 0xFFF)) >> 12);
  result = MiMapViewInSystemSpace(
             a1,
             (__int64)&unk_140438F40,
             &MappedBase,
             (unsigned __int64 *)&v33,
             (__int64 *)&v32,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v11 = (char *)v33 - (unsigned __int16)v9;
    v33 = (void *)((unsigned __int64)MappedBase | (unsigned __int16)v9);
    v12 = MiSectionControlArea(a1);
    v32 = v9 >> 12;
    v13 = MiLocatePagefileSubsection((unsigned int *)(v12 + 128), &v32);
    v14 = *(_QWORD *)&BitMapHeader.SizeOfBitMap;
    if ( (unsigned int)MiChargeSegmentCommit(v13, *((_QWORD *)v13 + 1) + 8 * v32) )
    {
      if ( a2 && (*(_DWORD *)a2 & 1) != 0 && v8 )
      {
        v15 = (signed __int32 *)v33;
        BitMapHeader.Buffer = (unsigned int *)v33;
        BitMapHeader.SizeOfBitMap = v5;
        RtlClearAllBits(&BitMapHeader);
        v16 = RtlEnumRvaListFirst(v8, &BugCheckParameter3, &v32);
        if ( v16 )
        {
          LOBYTE(v17) = v32;
          do
          {
            if ( (v17 & 1) != 0 )
            {
              v18 = v16 >> 4;
              if ( (v16 & 0xF) != 0 )
              {
                RtlSetBits(&BitMapHeader, 2 * v18, 2u);
              }
              else
              {
                v19 = 2 * v18;
                if ( (v17 & 4) != 0 )
                  ++v19;
                _bittestandset(v15, v19);
              }
            }
            ++BugCheckParameter3_4;
            v20 = (unsigned __int8 *)(v38 + *(_QWORD *)(v8 + 16));
            v16 = BugCheckParameter3;
            v21 = *(_QWORD *)(v8 + 24) - v38;
            if ( !v21 )
              break;
            do
            {
              if ( !v21 )
                KeBugCheckEx(0x1Au, 0x43666720uLL, v8, (ULONG_PTR)&BugCheckParameter3, v16);
              --v21;
              v22 = *v20 >> 6;
              v23 = *v20++ & 0x3F;
              v16 += v23 * RtlpRvaCompressionTableScales[v22];
            }
            while ( (_DWORD)v22 != 3 );
            BugCheckParameter3 = v16;
            LOBYTE(v17) = 0;
            v38 = (_DWORD)v20 - *(_DWORD *)(v8 + 16);
            v24 = *(_DWORD *)(v8 + 8);
            if ( v24 <= 1 )
            {
              if ( v24 == 1 )
              {
                v31 = *(int **)(v8 + 48);
                if ( v31 )
                  v17 = *v31;
                else
                  LOBYTE(v17) = 1;
              }
            }
            else
            {
              v25 = 0;
              v26 = 1;
              v27 = 0LL;
              do
              {
                if ( _bittest64(*(const signed __int64 **)(v8 + 40), v25 + BugCheckParameter3_4 * v24) )
                {
                  v28 = *(_QWORD *)(v8 + 48);
                  if ( v28 )
                    v29 = *(_DWORD *)(v27 + v28);
                  else
                    LOBYTE(v29) = v26;
                  LOBYTE(v17) = v29 | v17;
                }
                ++v25;
                v26 = __ROL4__(v26, 1);
                v27 += 4LL;
              }
              while ( v25 < v24 );
              v15 = (signed __int32 *)v33;
            }
          }
          while ( v16 );
        }
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        MiEliminateZeroPages(AnyMultiplexedVm, (unsigned __int64)v15 & 0xFFFFFFFFFFFFF000uLL, v14 << 12);
      }
      else
      {
        memset(v33, 255, (size_t)v11);
      }
    }
    else
    {
      v4 = -1073741523;
    }
    MmUnmapViewInSystemSpace(MappedBase);
    return v4;
  }
  return result;
}
