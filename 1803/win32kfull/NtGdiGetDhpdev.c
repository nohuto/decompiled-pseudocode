/*
 * XREFs of NtGdiGetDhpdev @ 0x1C0285040
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z @ 0x1C01317F4 (-ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiGetDhpdev(HDEV a1)
{
  __int64 v1; // rbx
  struct PDEV *v2; // rax
  struct PDEV *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = ValidUmpdHdev(a1);
  if ( v2 )
  {
    v4 = v2;
    v1 = *((_QWORD *)v2 + 224);
    PDEVOBJ::vUnreferencePdev(&v4, 0LL);
  }
  return v1;
}
