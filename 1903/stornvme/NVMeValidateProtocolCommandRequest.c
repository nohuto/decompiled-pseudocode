/*
 * XREFs of NVMeValidateProtocolCommandRequest @ 0x1C0012158
 * Callers:
 *     ProtocolCommandToNVMe @ 0x1C00124BC (ProtocolCommandToNVMe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeValidateProtocolCommandRequest(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  _DWORD *v4; // r9
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  __int64 v10; // r10
  unsigned __int64 v11; // rcx
  __int64 v12; // r11
  unsigned __int64 v13; // rcx
  int v14; // ecx
  int v15; // eax

  v2 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v4 = *(_DWORD **)(a2 + 64);
    v5 = 60LL;
  }
  else
  {
    v4 = *(_DWORD **)(a2 + 24);
    v5 = 16LL;
  }
  if ( v4[2] != 3 )
    goto LABEL_47;
  v6 = *(unsigned int *)(a2 + v5);
  if ( (unsigned int)v6 < 0x54 )
  {
    if ( (unsigned int)v6 < 0x14 )
    {
LABEL_47:
      v2 = -1056964602;
      *(_BYTE *)(a2 + 3) = 6;
      return v2;
    }
LABEL_46:
    v4[4] = 3;
    goto LABEL_47;
  }
  if ( *v4 != 1 || v4[1] != 84 || v4[6] != 64 )
    goto LABEL_46;
  v7 = (unsigned int)v4[7];
  if ( (_DWORD)v7 )
  {
    v8 = (unsigned int)v4[11];
    if ( v8 < 0x90 )
      goto LABEL_46;
    if ( (v8 & 7) != 0 )
      goto LABEL_46;
    v9 = v6;
    if ( v6 < v8 + v7 )
      goto LABEL_46;
  }
  else
  {
    v9 = v6;
  }
  v10 = (unsigned int)v4[8];
  if ( (_DWORD)v10 )
  {
    v11 = (unsigned int)v4[12];
    if ( v11 < 0x90 || (v11 & 7) != 0 || v9 < v11 + v10 )
      goto LABEL_46;
  }
  v12 = (unsigned int)v4[9];
  if ( (_DWORD)v12 )
  {
    v13 = (unsigned int)v4[13];
    if ( v13 < 0x90 || (v13 & 7) != 0 || v9 < v13 + v12 )
      goto LABEL_46;
  }
  if ( (_DWORD)v10 && (_DWORD)v7 && (unsigned int)v4[12] < v7 + (unsigned __int64)(unsigned int)v4[11]
    || (_DWORD)v12
    && ((_DWORD)v7 && (unsigned int)v4[13] < v7 + (unsigned __int64)(unsigned int)v4[11]
     || (_DWORD)v10 && (unsigned int)v4[13] < v10 + (unsigned __int64)(unsigned int)v4[12]) )
  {
    goto LABEL_46;
  }
  v14 = v4[14];
  if ( (unsigned int)(v14 - 1) > 1 )
    goto LABEL_46;
  v15 = v4[20] & 3;
  if ( v15 )
  {
    if ( v15 != 1 )
    {
      if ( v15 == 2 && ((_DWORD)v10 || !(_DWORD)v12) )
        goto LABEL_46;
      goto LABEL_44;
    }
    if ( !(_DWORD)v10 )
      goto LABEL_46;
  }
  else if ( (_DWORD)v10 )
  {
    goto LABEL_46;
  }
  if ( (_DWORD)v12 )
    goto LABEL_46;
LABEL_44:
  if ( v14 == 2 && (*(_QWORD *)(a1 + 160) & 0x2000000000LL) == 0 )
    goto LABEL_46;
  return v2;
}
