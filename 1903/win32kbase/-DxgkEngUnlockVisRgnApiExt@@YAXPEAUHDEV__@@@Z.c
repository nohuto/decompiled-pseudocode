/*
 * XREFs of ?DxgkEngUnlockVisRgnApiExt@@YAXPEAUHDEV__@@@Z @ 0x1C0122850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkEngUnlockVisRgnApiExt(HDEV a1)
{
  if ( (int)IsDxgkEngUnlockVisRgnSupported() >= 0 )
    DxgkEngUnlockVisRgn(a1);
}
