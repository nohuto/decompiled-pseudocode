/*
 * XREFs of ?SetInterestedProperty@TextInputStateAdapter@@UEAAJG_N@Z @ 0x180149800
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0sqq @ 0x18005A684 (McTemplateU0sqq.c)
 */

__int64 __fastcall TextInputStateAdapter::SetInterestedProperty(TextInputStateAdapter *this, __int64 a2, char a3)
{
  unsigned int v3; // ebx

  if ( (unsigned __int16)a2 < 0x22u )
  {
    v3 = 0;
    *((_BYTE *)this + (unsigned __int16)a2 + 49) = a3;
  }
  else
  {
    v3 = -2147024809;
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      McTemplateU0sqq((__int64)this, a2, "TextInputStateAdapter::SetInterestedProperty", 180LL, 87);
  }
  return v3;
}
