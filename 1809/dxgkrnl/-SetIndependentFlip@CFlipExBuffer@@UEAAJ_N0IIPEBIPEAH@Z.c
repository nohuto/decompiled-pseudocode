/*
 * XREFs of ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z @ 0x1C001D0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x1C001D154 (-EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z.c)
 *     ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x1C001D284 (-DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z.c)
 *     ?UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x1C00562AC (-UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z.c)
 */

__int64 __fastcall CFlipExBuffer::SetIndependentFlip(
        CFlipExBuffer *this,
        char a2,
        char a3,
        unsigned int a4,
        unsigned int a5,
        const unsigned int *a6,
        int *a7)
{
  __int64 result; // rax
  int v10; // ecx

  result = 0LL;
  *a7 = 0;
  v10 = *((_DWORD *)this + 88);
  if ( a2 )
  {
    if ( v10 )
    {
      if ( *((_DWORD *)this + 141) == a4 )
        goto LABEL_5;
      if ( v10 >= 1 && *((_BYTE *)this + 40) )
      {
        result = CFlipExBuffer::UpdateDxgkrnlIndependentFlipDuration(this, a4, a5, a6, a7);
        goto LABEL_5;
      }
    }
    else if ( *((_BYTE *)this + 40) )
    {
      result = CFlipExBuffer::EnableDxgkrnlIndependentFlipMode(this, a4, a5, a6, a7);
LABEL_5:
      *((_BYTE *)this + 569) = a3;
      return result;
    }
    result = 3221225473LL;
    goto LABEL_5;
  }
  if ( v10 )
    return CFlipExBuffer::DisableDxgkrnlIndependentFlipMode(this, a7);
  return result;
}
