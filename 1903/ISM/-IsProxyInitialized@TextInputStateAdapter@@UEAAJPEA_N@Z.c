/*
 * XREFs of ?IsProxyInitialized@TextInputStateAdapter@@UEAAJPEA_N@Z @ 0x180148610
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0sqq @ 0x18005A684 (McTemplateU0sqq.c)
 */

__int64 __fastcall TextInputStateAdapter::IsProxyInitialized(TextInputStateAdapter *this, bool *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    *a2 = *((_BYTE *)this + 48);
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      McTemplateU0sqq((__int64)this, 0LL, "TextInputStateAdapter::IsProxyInitialized", 210LL, 87);
  }
  return v2;
}
