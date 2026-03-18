/*
 * XREFs of NVMeReenumerateNameSpaceIdentifyCompletion @ 0x1C0017540
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0003F10 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C0003F3C (NVMeFreeDmaBuffer.c)
 *     memset @ 0x1C0005980 (memset.c)
 *     GetLocalCommand @ 0x1C0008F48 (GetLocalCommand.c)
 *     NVMeReenumerateCompareAndMerge @ 0x1C0016E7C (NVMeReenumerateCompareAndMerge.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C0017364 (NVMeReenumerateNameSpaceIdentify.c)
 *     NVMeVersionCheck @ 0x1C0018BB8 (NVMeVersionCheck.c)
 */

void __fastcall NVMeReenumerateNameSpaceIdentifyCompletion(__int64 a1, __int64 a2)
{
  __int64 LocalCommand; // r13
  __int64 v4; // r11
  __int64 SrbExtension; // rsi
  unsigned int *v6; // r12
  __int64 v7; // r14
  unsigned int v8; // edi
  _WORD *v9; // r8
  unsigned int v10; // r15d
  __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  _WORD *v14; // [rsp+60h] [rbp+30h]

  LocalCommand = GetLocalCommand(a1, a2);
  SrbExtension = GetSrbExtension(v4);
  v6 = *(unsigned int **)(*(_QWORD *)(LocalCommand + 96) + 4232LL);
  v7 = *(_QWORD *)(SrbExtension + 4200);
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 1536) + 516LL);
  if ( v8 > 0xFF )
    v8 = 255;
  v9 = 0LL;
  if ( !v6 )
    goto LABEL_4;
  v10 = *v6;
  if ( *(_BYTE *)(LocalCommand + 11) == 1
    && (*(_BYTE *)(a1 + 16)
     || v8 <= 1
     || !(unsigned __int8)NVMeVersionCheck(a1)
     || *(_BYTE *)(v7 + 4LL * (*(_BYTE *)(v7 + 26) & 0xF) + 130) != (_BYTE)v9
     || *(_WORD **)v7 != v9) )
  {
    v14 = v9;
    StorPortExtendedFunction(0LL, a1, 104LL);
    v9 = 0LL;
    if ( !v14 )
    {
LABEL_4:
      v10 = v8;
      goto LABEL_13;
    }
    memset(v14, 0, 0x68uLL);
    v9 = 0LL;
    *((_BYTE *)v14 + 64) = *(_BYTE *)(v7 + 26) & 0xF;
    *((_DWORD *)v14 + 12) = *(_DWORD *)(v7 + 4LL * (*(_BYTE *)(v7 + 26) & 0xF) + 128);
    *((_DWORD *)v14 + 13) = 1 << *((_BYTE *)v14 + 50);
    *((_QWORD *)v14 + 7) = *(_QWORD *)v7;
    *((_BYTE *)v14 + 65) = *(_BYTE *)(v7 + 24) & 1;
    *((_BYTE *)v14 + 66) = *(_BYTE *)(v7 + 29) & 7;
    v14[46] = *(_WORD *)(v7 + 46);
    *(_QWORD *)(v14 + 42) = *(_QWORD *)(v7 + 120);
    *(_OWORD *)(v14 + 34) = *(_OWORD *)(v7 + 104);
    *v14 = 1;
    *((_DWORD *)v14 + 1) = 4;
    v14[1] = 0;
    *((_BYTE *)v14 + 8) = 0;
    *((_BYTE *)v14 + 9) = 0;
    *((_BYTE *)v14 + 10) = v10 - 1;
    *((_DWORD *)v14 + 4) = v10;
    *(_QWORD *)&v6[2 * v10] = v14;
    ++v6[1];
  }
LABEL_13:
  if ( *(_WORD **)(SrbExtension + 4200) != v9 )
  {
    NVMeFreeDmaBuffer(
      a1,
      *(unsigned int *)(*(_QWORD *)(LocalCommand + 96) + 4240LL),
      *(_QWORD *)(*(_QWORD *)(LocalCommand + 96) + 4200LL));
    v9 = 0LL;
    *(_QWORD *)(SrbExtension + 4200) = 0LL;
    *(_DWORD *)(SrbExtension + 4240) = 0;
  }
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  if ( v10 >= v8 )
  {
    v11 = (__int64 *)(a1 + 1424);
    v12 = 2LL;
    do
    {
      v13 = *v11;
      v11 += 13;
      *(_QWORD *)(v13 + 4232) = v9;
      --v12;
    }
    while ( v12 );
    NVMeReenumerateCompareAndMerge(a1, (__int64)v6);
  }
  else
  {
    NVMeReenumerateNameSpaceIdentify(a1);
  }
}
