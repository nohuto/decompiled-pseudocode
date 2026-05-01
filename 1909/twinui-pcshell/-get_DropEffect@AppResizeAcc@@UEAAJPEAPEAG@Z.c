/*
 * XREFs of ?get_DropEffect@AppResizeAcc@@UEAAJPEAPEAG@Z @ 0x1803EC700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppResizeAcc::get_DropEffect(AppResizeAcc *this, unsigned __int16 **a2)
{
  const OLECHAR *v2; // rax
  unsigned __int16 *v4; // rax

  v2 = &szAgent;
  if ( *((_QWORD *)this + 11) )
    v2 = (const OLECHAR *)*((_QWORD *)this + 11);
  v4 = SysAllocString(v2);
  *a2 = v4;
  return v4 == 0LL ? 0x8007000E : 0;
}
