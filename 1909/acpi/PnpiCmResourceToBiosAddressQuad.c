/*
 * XREFs of PnpiCmResourceToBiosAddressQuad @ 0x1C00B447C
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C00A215C (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosAddressQuad(__int64 a1, __int64 a2)
{
  unsigned int v4; // r8d
  int v5; // ecx
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *i; // rdi
  __int16 v7; // cx
  unsigned __int16 Flags; // ax
  char v9; // al
  ULONGLONG v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 Start; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 3) )
    return 3221225473LL;
  v4 = *(_DWORD *)(a2 + 16);
  v5 = 0;
  if ( v4 )
  {
    for ( i = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(a2 + 20); ((i->Type - 3) & 0xFB) != 0; ++i )
    {
      if ( ++v5 >= v4 )
        return 0LL;
    }
    *(_BYTE *)(a1 + 5) = 0;
    v7 = i->Flags & 3;
    *(_BYTE *)(a1 + 5) = v7 == 0;
    Flags = i->Flags;
    if ( (Flags & 0x20) != 0 )
    {
      v9 = 3 - (v7 != 0);
    }
    else if ( (Flags & 8) != 0 )
    {
      v9 = 5 - (v7 != 0);
    }
    else
    {
      if ( (Flags & 4) == 0 )
      {
LABEL_15:
        v10 = RtlCmDecodeMemIoResource(i, &Start);
        v11 = Start + v10 - 1;
        *(_QWORD *)(a1 + 14) = Start;
        *(_QWORD *)(a1 + 22) = v11;
        i->Type = 0;
        return 0LL;
      }
      v9 = 7 - (v7 != 0);
    }
    *(_BYTE *)(a1 + 5) = v9;
    goto LABEL_15;
  }
  return 0LL;
}
