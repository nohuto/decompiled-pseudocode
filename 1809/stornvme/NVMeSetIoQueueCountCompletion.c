/*
 * XREFs of NVMeSetIoQueueCountCompletion @ 0x1C0017780
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 */

char __fastcall NVMeSetIoQueueCountCompletion(__int64 a1, __int64 a2, __int16 *a3)
{
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 SrbExtension; // r10
  __int64 v7; // r8
  __int64 v8; // rax
  char v9; // r8
  unsigned __int16 v10; // ax
  unsigned int v11; // edi
  unsigned __int16 v12; // si
  unsigned __int16 v13; // r11
  __int16 v14; // bp
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // si
  unsigned int v17; // ecx
  bool v18; // cf
  unsigned __int16 v19; // ax
  int v20; // eax
  unsigned int v21; // edx

  SrbExtension = GetSrbExtension(a2);
  if ( !v7 || (LOBYTE(v8) = *(_BYTE *)(v4 + 3), (_BYTE)v8 == 14) )
  {
    v8 = *(_QWORD *)(v5 + 896);
    *(_QWORD *)(v8 + 4232) = 0LL;
    goto LABEL_54;
  }
  v9 = *(_BYTE *)(v5 + 16);
  if ( (_BYTE)v8 != 1 || v9 )
  {
    v15 = 1;
    LOWORD(v17) = 1;
  }
  else
  {
    v10 = *(_WORD *)(v5 + 232);
    v11 = *(_DWORD *)(v5 + 120);
    v12 = *(_WORD *)(v5 + 194);
    v13 = v10 - 1;
    if ( v10 <= 1u )
      v13 = 1;
    *(_WORD *)(v5 + 794) = *a3 + 1;
    *(_WORD *)(v5 + 796) = a3[1] + 1;
    v14 = *a3;
    v15 = *a3 + 1;
    if ( v11 )
    {
      if ( v15 < v11 + v12 )
      {
        if ( (unsigned __int16)*(_DWORD *)a3 >= v11 )
          v14 = v11;
        *(_WORD *)(v5 + 798) = v14;
        v15 = *a3 - v14 + 1;
      }
      else
      {
        *(_WORD *)(v5 + 798) = v11;
      }
      if ( v15 >= v12 )
        v15 = v12;
      v16 = a3[1];
      v17 = (unsigned __int16)(v16 + 1);
      LODWORD(v8) = v11 + v13;
      if ( v17 < (unsigned int)v8 )
      {
        if ( v16 >= v11 )
          v16 = v11;
        *(_WORD *)(v5 + 798) = v16;
        LOWORD(v8) = a3[1] - v16 + 1;
        if ( (unsigned __int16)v8 >= v13 )
          LOWORD(v8) = v13;
        LOWORD(v17) = v8;
        goto LABEL_29;
      }
      *(_WORD *)(v5 + 798) = v11;
      v18 = (unsigned __int16)v17 < v13;
    }
    else
    {
      LOWORD(v8) = a3[1] + 1;
      LOWORD(v17) = v8;
      if ( v15 >= v12 )
        v15 = v12;
      v18 = (unsigned __int16)v8 < v13;
    }
    if ( !v18 )
      LOWORD(v17) = v13;
  }
LABEL_29:
  if ( !v9 )
  {
    v19 = *(_WORD *)(v5 + 36);
    if ( v19 && v15 >= v19 )
      v15 = *(_WORD *)(v5 + 36);
    LOWORD(v8) = *(_WORD *)(v5 + 38);
    if ( (_WORD)v8 && (unsigned __int16)v17 >= (unsigned __int16)v8 )
      LOWORD(v17) = *(_WORD *)(v5 + 38);
    if ( (unsigned __int16)v17 > v15 )
      LOWORD(v17) = v15;
  }
  if ( *(_QWORD *)(SrbExtension + 4232) )
  {
    if ( v15 >= *(_WORD *)(v5 + 264) )
      v15 = *(_WORD *)(v5 + 264);
    LOWORD(v8) = *(_WORD *)(v5 + 266);
    if ( (unsigned __int16)v17 >= (unsigned __int16)v8 )
      LOWORD(v17) = *(_WORD *)(v5 + 266);
  }
  *(_WORD *)(v5 + 264) = v15;
  *(_WORD *)(v5 + 266) = v17;
  if ( !*(_BYTE *)(v5 + 16) && *(_BYTE *)(v5 + 3728) )
  {
    v20 = *(_DWORD *)(v5 + 3740);
    v21 = (unsigned int)(unsigned __int16)v17 * *(_DWORD *)(v5 + 3732) / 0x64;
    *(_WORD *)(v5 + 268) = v21;
    if ( (v20 & 0x80u) == 0 )
    {
      LOWORD(v8) = v21;
      if ( (_WORD)v17 && (_WORD)v21 == (_WORD)v17 )
      {
        LOWORD(v8) = v21 - 1;
        *(_WORD *)(v5 + 268) = v21 - 1;
      }
    }
    else
    {
      *(_WORD *)(v5 + 268) = v17;
      LOWORD(v8) = v17;
    }
    if ( !(_WORD)v8 )
      *(_BYTE *)(v5 + 3728) = 0;
  }
  *(_QWORD *)(SrbExtension + 4232) = 0LL;
LABEL_54:
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  return v8;
}
