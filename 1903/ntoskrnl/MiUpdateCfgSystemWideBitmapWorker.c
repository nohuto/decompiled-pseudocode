/*
 * XREFs of MiUpdateCfgSystemWideBitmapWorker @ 0x14066E880
 * Callers:
 *     MiUpdateCfgSystemWideBitmap @ 0x14066F624 (MiUpdateCfgSystemWideBitmap.c)
 * Callees:
 *     MiLocatePagefileSubsection @ 0x140070E7C (MiLocatePagefileSubsection.c)
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
 *     RtlSetBitsEx @ 0x1400733B0 (RtlSetBitsEx.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     RtlClearAllBitsEx @ 0x1400A9490 (RtlClearAllBitsEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiEliminateZeroPages @ 0x1405EC600 (MiEliminateZeroPages.c)
 *     MiMapViewInSystemSpace @ 0x14066E434 (MiMapViewInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x14066EBA0 (MmUnmapViewInSystemSpace.c)
 *     MiChargeSegmentCommit @ 0x14066ED20 (MiChargeSegmentCommit.c)
 *     RtlEnumRvaListFirst @ 0x14066FB98 (RtlEnumRvaListFirst.c)
 */

__int64 __fastcall MiUpdateCfgSystemWideBitmapWorker(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // r12d
  ULONG_PTR v7; // rbx
  unsigned __int64 v8; // rdi
  __int64 result; // rax
  size_t v10; // r15
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rax
  unsigned int *v13; // rax
  unsigned __int64 v14; // r14
  _DWORD *v15; // rdi
  unsigned int v16; // r9d
  int v17; // r8d
  unsigned __int64 v18; // rdx
  unsigned __int8 *v19; // rax
  __int64 v20; // r10
  __int64 v21; // r8
  int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // r11d
  int v25; // r10d
  __int64 v26; // rdi
  __int64 v27; // rax
  int v28; // ecx
  char *AnyMultiplexedVm; // rax
  int *v30; // rax
  unsigned __int64 v31; // [rsp+40h] [rbp-41h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-39h]
  _DWORD *v33; // [rsp+50h] [rbp-31h]
  PVOID MappedBase; // [rsp+58h] [rbp-29h] BYREF
  _RTL_BITMAP_EX BitMapHeader; // [rsp+60h] [rbp-21h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp-11h] BYREF
  unsigned int v37; // [rsp+78h] [rbp-9h]

  v33 = (_DWORD *)a2;
  v4 = 0;
  BugCheckParameter3 = 0LL;
  v37 = 0;
  v7 = 0LL;
  if ( a2 )
    v7 = *(_QWORD *)(a2 + 16);
  v8 = a3 >> 3;
  BitMapHeader.SizeOfBitMap = a3 >> 3;
  v31 = a4 >> 3;
  v32 = (a4 >> 15) + ((((a3 >> 3) & 0xFFF) + 4095 + ((a4 >> 3) & 0xFFF)) >> 12);
  result = MiMapViewInSystemSpace(a1, (__int64)&unk_140464960, &MappedBase, &v31, &BitMapHeader, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v10 = v31 - (unsigned __int16)v8;
    v11 = (unsigned __int64)MappedBase | (unsigned __int16)v8;
    v12 = MiSectionControlArea(a1);
    v31 = v8 >> 12;
    v13 = MiLocatePagefileSubsection((unsigned int *)(v12 + 128), &v31);
    v14 = v32;
    if ( (unsigned int)MiChargeSegmentCommit(v13, *((_QWORD *)v13 + 1) + 8 * v31) )
    {
      v15 = v33;
      if ( v33 && (*v33 & 1) != 0 && v7 )
      {
        BitMapHeader.Buffer = (unsigned __int64 *)v11;
        BitMapHeader.SizeOfBitMap = a4;
        RtlClearAllBitsEx(&BitMapHeader);
        v16 = RtlEnumRvaListFirst(v7, &BugCheckParameter3, &v31);
        if ( v16 )
        {
          LOBYTE(v17) = v31;
          do
          {
            if ( (v17 & 1) != 0 )
            {
              v18 = 2 * ((unsigned __int64)v16 >> 4);
              if ( (v16 & 0xF) == v15[1] )
              {
                if ( (v17 & 4) != 0 )
                  _bittestandset64((signed __int64 *)v11, v18 + 1);
                else
                  _bittestandset64((signed __int64 *)v11, v18);
              }
              else
              {
                RtlSetBitsEx((__int64)&BitMapHeader, v18, 2uLL);
              }
            }
            ++HIDWORD(BugCheckParameter3);
            v19 = (unsigned __int8 *)(v37 + *(_QWORD *)(v7 + 16));
            v16 = BugCheckParameter3;
            v20 = *(_QWORD *)(v7 + 24) - v37;
            if ( !v20 )
              break;
            while ( 1 )
            {
              --v20;
              v21 = *v19 >> 6;
              v22 = *v19++ & 0x3F;
              v16 += v22 * RtlpRvaCompressionTableScales[v21];
              if ( (_DWORD)v21 == 3 )
                break;
              if ( !v20 )
                KeBugCheckEx(0x1Au, 0x43666720uLL, v7, (ULONG_PTR)&BugCheckParameter3, v16);
            }
            LODWORD(BugCheckParameter3) = v16;
            LOBYTE(v17) = 0;
            v37 = (_DWORD)v19 - *(_DWORD *)(v7 + 16);
            v23 = *(_DWORD *)(v7 + 8);
            if ( v23 <= 1 )
            {
              if ( v23 == 1 )
              {
                v30 = *(int **)(v7 + 48);
                if ( v30 )
                  v17 = *v30;
                else
                  LOBYTE(v17) = 1;
              }
            }
            else
            {
              v24 = 0;
              v25 = 1;
              v26 = 0LL;
              do
              {
                if ( _bittest64(*(const signed __int64 **)(v7 + 40), v24 + HIDWORD(BugCheckParameter3) * v23) )
                {
                  v27 = *(_QWORD *)(v7 + 48);
                  if ( v27 )
                    v28 = *(_DWORD *)(v26 + v27);
                  else
                    LOBYTE(v28) = v25;
                  LOBYTE(v17) = v28 | v17;
                }
                ++v24;
                v25 = __ROL4__(v25, 1);
                v26 += 4LL;
              }
              while ( v24 < v23 );
              v15 = v33;
            }
          }
          while ( v16 );
          v14 = v32;
        }
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        MiEliminateZeroPages((__int64)AnyMultiplexedVm, v11 & 0xFFFFFFFFFFFFF000uLL, v14 << 12);
      }
      else
      {
        memset((void *)v11, 255, v10);
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
