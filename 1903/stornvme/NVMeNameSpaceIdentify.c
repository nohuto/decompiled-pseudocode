/*
 * XREFs of NVMeNameSpaceIdentify @ 0x1C0016BD8
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000B0B4 (NVMeControllerInitPart1.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     memset @ 0x1C0005400 (memset.c)
 *     IsIntelChatham @ 0x1C0008004 (IsIntelChatham.c)
 *     NVMeVersionCheck @ 0x1C0018C68 (NVMeVersionCheck.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00190A8 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeNameSpaceIdentify(__int64 a1)
{
  _QWORD *v1; // rsi
  unsigned int v3; // r15d
  int v4; // r12d
  unsigned int v5; // ecx
  int i; // r14d
  void *v7; // rcx
  int v8; // edx
  __int64 v9; // rcx
  char v10; // r8
  char *v11; // rcx
  __int64 result; // rax
  int v13; // [rsp+70h] [rbp+40h]
  char *v14; // [rsp+78h] [rbp+48h]

  v1 = *(_QWORD **)(a1 + 1632);
  v3 = 255;
  v4 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 1536) + 516LL);
  if ( v5 > 0xFF || (v3 = v5) != 0 )
  {
    for ( i = 1; i - 1 < v3; ++i )
    {
      if ( !*(_BYTE *)(a1 + 16) || *(_DWORD *)(a1 + 184) == i )
      {
        v7 = *(void **)(a1 + 904);
        *(_BYTE *)(a1 + 819) = 0;
        memset(v7, 0, 0x10A0uLL);
        v8 = 0;
        *(_QWORD *)(*(_QWORD *)(a1 + 904) + 4232LL) = 0LL;
        *(_QWORD *)(a1 + 872) = *(_QWORD *)(a1 + 904);
        *(_DWORD *)(a1 + 808) = 1;
        do
          *(_BYTE *)(*(_QWORD *)(a1 + 904) + 4253LL) |= ++v8;
        while ( v8 < 2 );
        *(_WORD *)(*(_QWORD *)(a1 + 904) + 4244LL) = 0;
        v9 = *(_QWORD *)(a1 + 904);
        *(_QWORD *)(v9 + 4120) = *(_QWORD *)(a1 + 1640);
        *(_BYTE *)(v9 + 4136) = i == 0;
        *(_BYTE *)(v9 + 4096) = 6;
        *(_DWORD *)(v9 + 4100) = i;
        ProcessCommand(a1, a1 + 816);
        WaitForCommandCompleteWithCustomTimeout(a1);
        if ( IsIntelChatham(a1) )
        {
          HIBYTE(v13) = *((_BYTE *)v1 + 384);
          BYTE2(v13) = *((_BYTE *)v1 + 385);
          BYTE1(v13) = *((_BYTE *)v1 + 386);
          LOBYTE(v13) = *((_BYTE *)v1 + 387);
          if ( v13 != -559038737 && i == 1 )
          {
            memset(v1, 0, 0x1000uLL);
            *v1 = 67108336LL;
            v1[1] = 67108336LL;
            v1[2] = 67108336LL;
            *((_BYTE *)v1 + 130) = 9;
          }
        }
        if ( *(_BYTE *)(a1 + 819) == 1 )
        {
          v10 = *(_BYTE *)(a1 + 16);
          if ( v10
            || v3 <= 1
            || !(unsigned __int8)NVMeVersionCheck(a1)
            || *((_BYTE *)v1 + 4 * (*((_BYTE *)v1 + 26) & 0xF) + 130)
            || *v1 )
          {
            if ( !v10 )
            {
              StorPortExtendedFunction(0LL, a1, 104LL);
              break;
            }
            v11 = *(char **)(a1 + 1552);
            v14 = v11;
            *(_QWORD *)(a1 + 1552) = v11 + 104;
            memset(v11, 0, 0x68uLL);
            v14[64] = *((_BYTE *)v1 + 26) & 0xF;
            *((_DWORD *)v14 + 12) = *((_DWORD *)v1 + (*((_BYTE *)v1 + 26) & 0xF) + 32);
            *((_DWORD *)v14 + 13) = 1 << v14[50];
            *((_QWORD *)v14 + 7) = *v1;
            v14[65] = v1[3] & 1;
            v14[66] = *((_BYTE *)v1 + 29) & 7;
            *((_WORD *)v14 + 46) = *((_WORD *)v1 + 23);
            *((_WORD *)v14 + 47) = *((_WORD *)v1 + 50);
            *((_WORD *)v14 + 48) = *((_WORD *)v1 + 51);
            *(_QWORD *)(v14 + 84) = v1[15];
            ++v4;
            *(_OWORD *)(v14 + 68) = *(_OWORD *)(v1 + 13);
            *(_WORD *)v14 = 1;
            *((_DWORD *)v14 + 1) = 4;
            *((_WORD *)v14 + 1) = 0;
            v14[8] = 0;
            v14[9] = 0;
            v14[10] = i - 1;
            *((_DWORD *)v14 + 4) = i;
            *(_QWORD *)(a1 + 8LL * (unsigned int)(i - 1) + 1648) = v14;
          }
        }
        if ( *(_BYTE *)(a1 + 16) )
          break;
      }
    }
  }
  result = (unsigned __int16)v4;
  *(_DWORD *)(a1 + 192) = (unsigned __int16)v4;
  *(_DWORD *)(a1 + 180) = v4;
  return result;
}
