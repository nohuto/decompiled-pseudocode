/*
 * XREFs of GreGetBitmapDimension @ 0x1C028F068
 * Callers:
 *     NtGdiGetBitmapDimension @ 0x1C027EAC0 (NtGdiGetBitmapDimension.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0F0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBitmapDimension(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rax
  DYNAMICMODECHANGESHARELOCK *v7; // rcx
  __int64 v8; // rbx
  ULONG v9; // ecx
  char v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11);
  LOBYTE(v5) = 5;
  v6 = HmgShareLockCheck(a1, v5);
  v8 = v6;
  if ( v6 )
  {
    if ( (*(_DWORD *)(v6 + 112) & 0x4000000) == 0 )
      goto LABEL_8;
    if ( a2 )
    {
      v4 = 1;
      *a2 = *(_QWORD *)(v6 + 152);
      goto LABEL_8;
    }
    v9 = 87;
  }
  else
  {
    v9 = 6;
  }
  EngSetLastError(v9);
LABEL_8:
  if ( v8 )
    DEC_SHARE_REF_CNT(v8);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v7);
  return v4;
}
