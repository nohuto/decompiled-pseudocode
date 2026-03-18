/*
 * XREFs of NVMeGetLogPageCompletion @ 0x1C0015150
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00039B0 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C00039DC (NVMeFreeDmaBuffer.c)
 *     GetLocalCommand @ 0x1C00090F8 (GetLocalCommand.c)
 *     GetLunExtension @ 0x1C0013998 (GetLunExtension.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C0015C1C (NVMeIssueAsyncEventCommand.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C0017414 (NVMeReenumerateNameSpaceIdentify.c)
 */

__int64 __fastcall NVMeGetLogPageCompletion(__int64 a1, __int64 a2)
{
  __int64 LocalCommand; // rsi
  __int64 v4; // r11
  __int64 result; // rax
  __int64 v6; // r11
  __int64 v7; // rbx
  char v8; // dl
  __int64 v9; // rcx
  char v10; // al
  _BYTE *v11; // r14
  __int64 LunExtension; // rbp

  LocalCommand = GetLocalCommand(a1, a2);
  result = GetSrbExtension(v4);
  v7 = result;
  if ( LocalCommand )
  {
    v8 = *(_BYTE *)(v6 + 3);
    if ( v8 == 14 || (result = *(unsigned int *)(a1 + 20), (result & 0xE) != 0) )
    {
      if ( *(_QWORD *)(v7 + 4200) )
      {
        result = NVMeFreeDmaBuffer(
                   a1,
                   *(unsigned int *)(*(_QWORD *)(LocalCommand + 96) + 4240LL),
                   *(_QWORD *)(*(_QWORD *)(LocalCommand + 96) + 4200LL));
        *(_QWORD *)(v7 + 4200) = 0LL;
        *(_DWORD *)(v7 + 4240) = 0;
      }
      *(_BYTE *)(v7 + 4253) |= 8u;
    }
    else
    {
      v9 = *(_QWORD *)(LocalCommand + 96);
      if ( *(_QWORD *)(v7 + 4200) )
      {
        if ( v8 == 1 )
        {
          v10 = *(_BYTE *)(v9 + 4136);
          if ( v10 != 1 )
          {
            if ( v10 == 2 )
            {
              v11 = *(_BYTE **)(v9 + 4200);
              LunExtension = GetLunExtension(a1, HIDWORD(*(_QWORD *)(v7 + 4096)));
              if ( (*v11 & 0x1F) != 0 )
                StorPortExtendedFunction(87LL, a1, LunExtension);
              if ( v11[5] >= 0x5Fu && !byte_1C00200A1 )
              {
                StorPortExtendedFunction(85LL, a1, LunExtension);
                byte_1C00200A1 = 1;
              }
            }
            else if ( v10 == 4 && **(_DWORD **)(v9 + 4200) && *(_DWORD *)(*(_QWORD *)(a1 + 1536) + 516LL) )
            {
              NVMeReenumerateNameSpaceIdentify(a1);
            }
          }
        }
        NVMeFreeDmaBuffer(
          a1,
          *(unsigned int *)(*(_QWORD *)(LocalCommand + 96) + 4240LL),
          *(_QWORD *)(*(_QWORD *)(LocalCommand + 96) + 4200LL));
        *(_BYTE *)(v7 + 4253) |= 8u;
        *(_QWORD *)(v7 + 4200) = 0LL;
        *(_DWORD *)(v7 + 4240) = 0;
      }
      *(_DWORD *)LocalCommand = 0;
      return NVMeIssueAsyncEventCommand(a1, LocalCommand);
    }
  }
  else
  {
    *(_BYTE *)(result + 4253) |= 8u;
  }
  return result;
}
