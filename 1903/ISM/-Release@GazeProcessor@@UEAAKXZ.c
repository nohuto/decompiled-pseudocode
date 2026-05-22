/*
 * XREFs of ?Release@GazeProcessor@@UEAAKXZ @ 0x180125DA0
 * Callers:
 *     ?Release@GazeProcessor@@W7EAAKXZ @ 0x18003A110 (-Release@GazeProcessor@@W7EAAKXZ.c)
 *     ?Release@GazeProcessor@@WBA@EAAKXZ @ 0x18003A120 (-Release@GazeProcessor@@WBA@EAAKXZ.c)
 *     ?Release@GazeProcessor@@WBI@EAAKXZ @ 0x18003A130 (-Release@GazeProcessor@@WBI@EAAKXZ.c)
 *     ?Release@GazeProcessor@@WCA@EAAKXZ @ 0x18003A140 (-Release@GazeProcessor@@WCA@EAAKXZ.c)
 *     ?Release@GazeProcessor@@WCI@EAAKXZ @ 0x18003A150 (-Release@GazeProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeProcessor::Release(GazeProcessor *this)
{
  return RefCountedObject::Release((GazeProcessor *)((char *)this + 40));
}
