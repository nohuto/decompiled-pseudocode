/*
 * XREFs of ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x1C001CF44
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C00103C4 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z @ 0x1C001CDA0 (-SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 *     DxgkSetIndependentFlipMode @ 0x1C0155F5C (DxgkSetIndependentFlipMode.c)
 */

__int64 __fastcall CFlipExBuffer::DisableDxgkrnlIndependentFlipMode(CFlipExBuffer *this, int *a2)
{
  __int64 v2; // rax
  char *v3; // rbx
  unsigned int v6; // eax
  unsigned int v7; // ebp
  int v9; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+78h] [rbp+10h]

  v2 = *((_QWORD *)this + 1);
  v3 = (char *)this + 496;
  v9 = 0;
  v10 = v2;
  v6 = DxgkSetIndependentFlipMode(
         *((HANDLE *)this + 61),
         *((_DWORD *)this + 141),
         *((_DWORD *)this + 140),
         (__int64)this + 496,
         (__int64)&v9,
         (__int64)this + 480);
  *((_DWORD *)this + 88) = 0;
  *((_DWORD *)this + 140) = 0;
  v7 = v6;
  memset(v3, 0, 0x40uLL);
  ObCloseHandle(*((HANDLE *)this + 61), 0);
  *((_QWORD *)this + 61) = 0LL;
  *((_BYTE *)this + 571) = 0;
  if ( a2 )
    *a2 = v9;
  return v7;
}
