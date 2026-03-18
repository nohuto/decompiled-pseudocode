/*
 * XREFs of NVMeNameSpaceIdentify @ 0x1C0016438
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000DABC (NVMeControllerInitPart1.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     IsIntelChatham @ 0x1C000ABD8 (IsIntelChatham.c)
 *     NVMeVersionCheck @ 0x1C0017C84 (NVMeVersionCheck.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 */

char __fastcall NVMeNameSpaceIdentify(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rsi
  unsigned int v4; // r15d
  int v5; // r12d
  unsigned int v6; // ecx
  int v7; // r14d
  void *v8; // rcx
  int v9; // edx
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // r8
  char v13; // r8
  char *v14; // rcx
  int v16; // [rsp+60h] [rbp+30h]
  char *v17; // [rsp+60h] [rbp+30h]

  v1 = *(_QWORD *)(a1 + 1528);
  v2 = *(_QWORD **)(a1 + 1624);
  v4 = 255;
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 516);
  if ( v6 > 0xFF || (v4 = *(_DWORD *)(v1 + 516), v6) )
  {
    v7 = 1;
    do
    {
      if ( !*(_BYTE *)(a1 + 16) || *(_DWORD *)(a1 + 176) == v7 )
      {
        v8 = *(void **)(a1 + 896);
        *(_BYTE *)(a1 + 811) = 0;
        memset(v8, 0, 0x10A0uLL);
        v9 = 0;
        *(_QWORD *)(*(_QWORD *)(a1 + 896) + 4232LL) = 0LL;
        *(_QWORD *)(a1 + 864) = *(_QWORD *)(a1 + 896);
        *(_DWORD *)(a1 + 800) = 1;
        do
          *(_BYTE *)(*(_QWORD *)(a1 + 896) + 4253LL) |= ++v9;
        while ( v9 < 2 );
        *(_WORD *)(*(_QWORD *)(a1 + 896) + 4244LL) = 0;
        v10 = *(_QWORD *)(a1 + 896);
        *(_QWORD *)(v10 + 4120) = *(_QWORD *)(a1 + 1632);
        v11 = *(_DWORD *)(v10 + 4136) & 0xFFFFFFFC;
        *(_BYTE *)(v10 + 4096) = 6;
        *(_DWORD *)(v10 + 4100) = v7;
        *(_DWORD *)(v10 + 4136) = v11 | (v7 == 0);
        ProcessCommand(a1, a1 + 808);
        LOBYTE(v12) = 1;
        WaitForCommandCompleteWithCustomTimeout(a1, a1 + 808, v12, 10000LL);
        LOBYTE(v1) = IsIntelChatham(a1);
        if ( (_BYTE)v1 )
        {
          HIBYTE(v16) = *((_BYTE *)v2 + 384);
          BYTE2(v16) = *((_BYTE *)v2 + 385);
          BYTE1(v16) = *((_BYTE *)v2 + 386);
          LOBYTE(v1) = *((_BYTE *)v2 + 387);
          LOBYTE(v16) = v1;
          if ( v16 != -559038737 && v7 == 1 )
          {
            memset(v2, 0, 0x1000uLL);
            LOBYTE(v1) = -16;
            *v2 = 67108336LL;
            v2[1] = 67108336LL;
            v2[2] = 67108336LL;
            *((_BYTE *)v2 + 130) = 9;
          }
        }
        if ( *(_BYTE *)(a1 + 811) == 1 )
        {
          v13 = *(_BYTE *)(a1 + 16);
          if ( v13
            || v4 <= 1
            || !(unsigned __int8)NVMeVersionCheck(a1)
            || (v1 = *((_BYTE *)v2 + 26) & 0xF, *((_BYTE *)v2 + 4 * v1 + 130))
            || *v2 )
          {
            if ( !v13 )
            {
              LOBYTE(v1) = StorPortExtendedFunction(0LL, a1, 96LL, 1701672526LL);
              break;
            }
            v14 = *(char **)(a1 + 1544);
            v17 = v14;
            *(_QWORD *)(a1 + 1544) = v14 + 96;
            memset(v14, 0, 0x60uLL);
            v17[64] = *((_BYTE *)v2 + 26) & 0xF;
            *((_DWORD *)v17 + 12) = *((_DWORD *)v2 + (*((_BYTE *)v2 + 26) & 0xF) + 32);
            *((_DWORD *)v17 + 13) = 1 << v17[50];
            *((_QWORD *)v17 + 7) = *v2;
            v17[65] = v2[3] & 1;
            v17[66] = *((_BYTE *)v2 + 29) & 7;
            *((_WORD *)v17 + 46) = *((_WORD *)v2 + 23);
            *(_QWORD *)(v17 + 84) = v2[15];
            ++v5;
            *(_OWORD *)(v17 + 68) = *(_OWORD *)(v2 + 13);
            *(_WORD *)v17 = 1;
            *((_DWORD *)v17 + 1) = 4;
            *((_WORD *)v17 + 1) = 0;
            v17[8] = 0;
            v17[9] = 0;
            v17[10] = v7 - 1;
            *((_DWORD *)v17 + 4) = v7;
            *(_QWORD *)(a1 + 8LL * (unsigned int)(v7 - 1) + 1640) = v17;
            LOBYTE(v1) = v7;
            *(_DWORD *)(a1 + 184) = (unsigned __int16)v7;
          }
        }
        if ( *(_BYTE *)(a1 + 16) )
          break;
      }
      LOBYTE(v1) = v7++;
    }
    while ( v7 - 1 < v4 );
  }
  *(_DWORD *)(a1 + 172) = v5;
  return v1;
}
