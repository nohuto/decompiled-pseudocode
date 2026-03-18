/*
 * XREFs of TraceDxgkBlockThread @ 0x1C001ADA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 */

__int64 __fastcall TraceDxgkBlockThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (_DWORD)a1 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    return McTemplateK0q(a1, &EventBlockThread, a3, (unsigned int)a1);
  return result;
}
